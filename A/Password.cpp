#include<iostream>

using namespace std;

int main(){
    int t;

    cin >> t;

    while(t--){
        int n;

        cin >> n;

        int nothing;
        for(int i = 0; i < n; i++){
            cin >> nothing;
        }

        int combinations = 3 * (10 - n) * (10 - n - 1);

        cout << combinations << '\n';

    }

    return 0;
}