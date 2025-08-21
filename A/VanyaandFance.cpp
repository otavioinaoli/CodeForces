#include<iostream>
using namespace std;

int main(){
    int n, h, road = 0;
    
    cin >> n >> h;


    for(int i = 0; i < n; i++){
        int w;

        cin >> w;

        if(w > h)
            road += 2;
        else
            road++;
    }

    cout << road;


    return 0;
}