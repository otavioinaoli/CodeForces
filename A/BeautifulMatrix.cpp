#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main(){
    vector<vector<int>> matrix(5, vector<int>(5));

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> matrix[i][j];
        }
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(matrix[i][j] == 1)
                cout << abs(2 - i) + abs(2 - j);
        }
    }


    return 0;

}