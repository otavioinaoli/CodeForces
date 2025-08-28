#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n, grps = 1;

    cin >> n;

    vector<string> mag(n);

    for(int i = 0; i < n; i++){
        string tipo;

        cin >> tipo;

        mag[i] = tipo;
    }

    for(int i = 1; i < n; i++){
        if(mag[i][1] == mag[i - 1][0]){
            grps++;
        }
    }

    cout << grps;

    return 0;
}