#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;

    cin >> n;

    vector<int> garden;

    for(int i = 0; i < n; i++){
        int h;

        cin >> h;

        garden.push_back(h);
    }

    int watered, max = 0;
    for(int i = 0; i < n; i++){
        int min = garden[i];
        watered = 1;
        for(int j = i + 1; j < n && garden[j] <= min; j++){
            watered++;
            min = garden[j];
        }
        min = garden[i];
        for(int j = i - 1; j >= 0 && garden[j] <= min; j--){
            watered++;
            min = garden[j];
        }
        if(watered > max)
            max = watered;
    }

    cout << max;

    return 0;
}