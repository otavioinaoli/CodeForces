#include<iostream>
#include<string>

using namespace std;

int main(){
    string number;

    cin >> number;

    int size = number.size();

    cout << number;

    for(int i = size - 1; i >= 0 ; i--){
        cout <<number[i];
    }

    return 0;
}