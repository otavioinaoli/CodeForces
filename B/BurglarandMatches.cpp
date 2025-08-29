#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n, m;

    cin >> n >> m;

    vector<vector<int>> warehouse(m, vector<int>(2));

    for(int i = 0; i < m; i++){
        cin >> warehouse[i][0] >> warehouse[i][1];
    }

    sort(warehouse.begin(), warehouse.end(),
         [](const vector<int>& a, const vector<int>& b) {
             return a[1] > b[1];  
         });
    
    int caixas = 0, maxm = 0;
    for(int i = 0; i < m && caixas < n; i++){
        while(warehouse[i][0] > 0 && caixas < n){
            maxm += warehouse[i][1];
            warehouse[i][0]--;
            caixas++;
        }
    }

    cout << maxm;

    return 0;
}