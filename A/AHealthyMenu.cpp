#include<iostream>
#include<vector>

using namespace std;


int main(){
    int m, n;

    cin >> n >> m;

    vector<vector<int>> school(n, vector<int>(m, 0));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> school[i][j];
        }
    }

    int total = 0, max = 0;
    for(int i = 0; i < m; i++){
        max = 0;
        for(int j = 0; j < n; j++){
            if(school[j][i] > max){
                max = school[j][i];
            }
        }
        total += max;
    }

    cout << total;

    return 0;

}