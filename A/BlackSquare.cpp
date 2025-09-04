#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector <int> custos(4);

    for(int i = 0; i < 4; i++){
        cin >> custos[i];
    }

    string square;

    cin >> square;
    
    int calories = 0;
    for(char c: square){
        if(c == '1'){
            calories += custos[0];
        }else if(c == '2'){
            calories += custos[1];
        }else if(c == '3'){
            calories += custos[2];
        }else{
            calories += custos[3];
        }
    }

    cout << calories;

    return 0;
}