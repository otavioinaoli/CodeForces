#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;

    cin >> n;

    vector<int> pylons;

    for(int i = 0; i <= n; i++){
        int pylon;

        cin >> pylon;

        pylons.push_back(pylon);
    }
    
    int money = pylons[0], energy = 0;
    for(int i = 0; i < n; i++){
        if(pylons[i] - pylons[i + 1] + energy < 0){
            money += (pylons[i] - pylons[i + 1] + energy) * -1;
            energy = 0;
        }else{
            energy += pylons[i] - pylons[i + 1];
        }
    }

    cout << money;

    return 0;
}