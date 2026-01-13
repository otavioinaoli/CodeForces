#include<iostream>
#include<vector>
#include <climits>

using namespace std;

int main(){
    int t;

    cin >> t;

    while(t--){
        int n;

        cin >> n;

        vector<int> numeros(n);

        int min = INT_MAX, max = 0, minAp = 1, maxAp = 1;
        for(int i = 0; i < n; i++){
            cin >> numeros[i];

            if(numeros[i] < min){
                min = numeros[i];
                minAp = 1;
            }else if(numeros[i] == min){
                minAp++;
            }
                
            
            if(numeros[i] > max){
                max = numeros[i];
                maxAp = 1;
            }else if(numeros[i] == max){
                maxAp++;
            }
                
        }

        if (min == max)
            cout << 1LL * n * (n - 1) << '\n';
        else
            cout << 2LL * minAp * maxAp << '\n';

    }

    return 0;
}