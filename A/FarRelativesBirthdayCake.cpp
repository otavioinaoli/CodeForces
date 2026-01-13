#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;

    cin >> n;

    vector<string> cake(n);

    for(int i = 0; i < n; i++){
        cin >> cake[i];
    }

    int pairs = 0;
    for(int i = 0; i < n; i++){
        int chcolates = 0;
        for(int j = 0; j < n; j++){
            if(cake[i][j] == 'C'){
                chcolates++;
            }
        }

        if(chcolates >= 2){
            pairs += (chcolates * (chcolates - 1) )/ 2;
        }
    }

    for(int i = 0; i < n; i++){
        int chcolates = 0;
        for(int j = 0; j < n; j++){
            if(cake[j][i] == 'C'){
                chcolates++;
            }
        }

        if(chcolates >= 2){
            pairs += (chcolates * (chcolates - 1) )/ 2;
        }
    }

    cout << pairs;


    return 0;
}