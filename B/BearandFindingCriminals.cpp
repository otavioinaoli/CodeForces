#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n, a;

    cin >> n >> a;

    vector<int> cities;

    for(int i = 0; i < n; i++){
        int city;

        cin >> city;

        cities.push_back(city);
    }


    int captures = cities[a - 1];
    
    int ptr = a - 1, s = 1;
    while(ptr + s < n || ptr - s >= 0){
        int left = -1, right = -1;

        if(ptr - s >= 0){
            left = cities[ptr - s];
        }
        if(ptr + s < n){
            right = cities[ptr + s];
        }

        if(left == 1 && right == 1){
            captures += 2;
        }else if((left && right == -1) || (left == -1 && right)){
            captures++;
        }
        s++;
    }

    cout << captures;


    return 0;
}