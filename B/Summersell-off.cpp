#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct Item{
    long long sell;
    long long consumer;
    long long gain;
    long long normal;
};

int main(){
    int n, f;
    cin >> n >> f;

    vector<Item> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i].sell >> v[i].consumer;

        v[i].normal = min(v[i].sell, v[i].consumer);
        long long promo = min(2LL * v[i].sell, v[i].consumer);

        v[i].gain = promo - v[i].normal;
    }

    sort(v.begin(), v.end(), [](const Item &a, const Item &b){
        return a.gain > b.gain;
    });

    long long total = 0;

    for(int i = 0; i < f; i++){
        total += v[i].normal + v[i].gain; 
    }

    for(int i = 0; i < n; i++){
        if (i >= f) total += v[i].normal;
    }

    cout << total;
    
    return 0;
}
