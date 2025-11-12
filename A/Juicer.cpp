#include<iostream>

using namespace std;

int main(){
    int n, b, d;

    cin >> n >> b >> d;

    int total = 0, overflow = 0;
    for(int i = 0; i < n; i++){
        int ai;

        cin >> ai;

        if(ai <= b)
            total += ai;

        if(total > d){
            overflow++;
            total = 0;
        }
            

    }

    cout << overflow;

    return 0;
}