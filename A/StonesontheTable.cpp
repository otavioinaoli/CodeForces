#include<iostream>

using namespace std;

int main(){
    int n;

    cin >> n;

    string table;

    cin >> table;

    int awnser = 0;
    char l1 = table[0], l2;
    for(int i = 1; i < n; i++){
        l2 = table[i];
        if(l1 == l2){
            awnser++;
        }else{
            l1 = l2;
        }
    }

    cout << awnser;

    return 0;
}