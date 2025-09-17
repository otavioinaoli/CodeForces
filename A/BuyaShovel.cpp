#include<iostream>

using namespace std;

int main(){
    int k, r;

    cin >> k >> r;

    int shoves = 1;

    while((k * shoves) % 10  != r && (k * shoves) % 10 != 0){  
        shoves++;
    }

    cout << shoves;

    return 0;

}