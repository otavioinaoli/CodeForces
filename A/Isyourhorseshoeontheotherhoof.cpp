#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> horseshoes(4);

    for(int i = 0; i < 4; i++){
        cin >> horseshoes[i];
    }

    sort(horseshoes.begin(), horseshoes.end());

    int needBuy = 0;

    for(int i = 1; i < 4; i++){
        if(horseshoes[i] == horseshoes[i - 1]){
            horseshoes[i - 1] = 0;
            needBuy++;
        }
    }

    cout << needBuy;

    return 0;
}