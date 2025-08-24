#include<iostream>
using namespace std;

int main(){
    int n, a, b, c;

    cin >> n;

    int p = 0;
    while(n > 0){

        cin >> a >> b >> c;

        if(a + b + c > 1){
            p++;
        }
        n--;
    }

    cout << p;

    return 0;
}