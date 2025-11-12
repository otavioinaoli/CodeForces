#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;

    cin >> n;

    vector<int> a;

    for(int i = 0; i < n; i++){
        int ai;

        cin >> ai;

        a.push_back(ai);
    }

    int m;

    cin >> m;

    for(int i = 0; i < m; i++){
        int x, y;

        cin >> x >> y;

        x--;

        if(x - 1 >= 0) a[x - 1] += y - 1;
        
        if(x + 1 < n) a[x + 1] += a[x] - y;
        
        a[x] = 0;
    }

    for(int i : a){
        cout << i << '\n';
    }

    return 0;
}