#include <iostream>

using namespace std;

int main(){
    int n;

    cin >> n;

    long long totalCola = 0;

    for(int i = 0; i < n; i++){
        int cola;

        cin >> cola;

        totalCola += cola;
    }

    int maxVolume1, maxVolume2;

    cin >> maxVolume1 >> maxVolume2;

    for(int i = 2; i < n; i++){
        int cansVolume;

        cin >> cansVolume;

        if(cansVolume > maxVolume1){
            if(maxVolume1 > maxVolume2)
                maxVolume2 = maxVolume1;
            maxVolume1 = cansVolume;
        }else if(cansVolume > maxVolume2)
            maxVolume2 = cansVolume;
    }

    long int totalVolume = maxVolume1 + maxVolume2;

    cout << (totalVolume >= totalCola ? "YES" : "NO");

    return 0;

}