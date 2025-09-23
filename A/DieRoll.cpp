#include<iostream>

using namespace std;

int main(){
    int y, w;

    cin >> y >> w;

    int d = y > w ? 7 - y : 7 - w;

    if(d == 6)
        cout << "1/1";
    else if(d == 5)
        cout << "5/6";
    else if(d == 4)
        cout << "2/3";
    else if(d == 3)
        cout << "1/2";
    else if(d == 2)
        cout << "1/3";
    else if(d == 1)
        cout << "1/6";

    return 0;
}