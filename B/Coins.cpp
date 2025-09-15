#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int>valores(3, 0);

    for(int i = 0; i < 3; i++){
        string result;

        cin >> result;

        if(result[1] == '<'){
            valores[result[2] - 'A']++;
        }else{
            valores[result[0] - 'A']++;
        }
    }

    if(valores[0] == 1 && valores[1] == 1 && valores[2] == 1){
        cout << "Impossible";
    }else{
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                if(valores[j] == i){
                    char letra;
                    letra = 'A' + j;
                    cout << (letra);
                }
            }
        }
    }

    return 0;
}