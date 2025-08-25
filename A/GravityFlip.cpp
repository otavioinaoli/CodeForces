#include<iostream>
#include<algorithm> 
#include<vector>

using namespace std;

int main(){
    int n;

    cin >> n;

    vector<int> box;

    for(int i = 0; i < n; i++){
        int toy;

        cin >> toy;

        box.push_back(toy);
    }

    sort(box.begin(), box.end());

    for(int a : box){
        cout << a << " ";
    }

    return 0;
}