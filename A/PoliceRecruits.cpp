#include<iostream>

using namespace std;

int main(){
    int n, cops = 0, nosolved = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        int reg;

        cin >> reg;

        if(reg < 0 && cops > 0){
            cops--;
        }else if(reg < 0){
            nosolved++;
        }else{
            cops += reg;
        }
    }

    cout << nosolved;

    return 0;
}