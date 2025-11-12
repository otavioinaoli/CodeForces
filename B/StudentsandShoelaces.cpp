#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n, m;

    cin >> n >> m;

    vector<vector<int>> graph(n, vector<int>(n, 0));
    vector<int> edge(n, 0);

    for(int i = 0; i < m; i++){
        int u, v;

        cin >> u >> v;

        graph[u - 1][v - 1] = 1;
        edge[u - 1]++;
        edge[v - 1]++;
    }

    int total = -1;
    bool change = true;

    while(change){
        change = false;
        total++;

        vector<int> changes(n, 0);

        for(int i = 0; i < n; i++){  
            if(edge[i] == 1){
                changes[i] = 1;
                change = true;
            }
        }

        for(int i = 0; i < n; i++){
            if(changes[i]){
                for(int j = 0; j < n; j++){
                    if(graph[i][j] || graph[j][i]){
                        edge[j]--;
                        edge[i]--;
                        graph[i][j] = 0;
                        graph[j][i] = 0;
                        break;
                    }
                }
            }
        }
    }
    
    cout << total;

    return 0;
}