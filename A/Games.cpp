#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;

    cin >> n;

    vector<vector<int>>uniform(2, vector<int>(n));

    for(int i = 0; i < n; i++){
        cin >> uniform[0][i];
        cin >> uniform[1][i];
    }

    int games = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(uniform[0][i] == uniform[1][j])
                games++;
        }
    }

    cout << games;

    return 0;
}