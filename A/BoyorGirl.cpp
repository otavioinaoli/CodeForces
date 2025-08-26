#include<iostream>
#include<vector>

using namespace std;

int main(){
    string nick;

    cin >> nick;

    int tam = nick.size();

    int distincts = 0;
    vector<int> freq(26, 0);

    for(int i = 0; i < tam; i++){
        if(!freq[nick[i] - 97])
            distincts++;
        
        freq[nick[i] - 97]++;
    }

    if(distincts % 2 != 0)
        cout << "IGNORE HIM!";
    else
        cout << "CHAT WITH HER!";

    return 0;
}