#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n, m;

    vector<int> a;
    vector<int> searchTime(100000, 0);

    cin >> n;

    for(int i = 0; i < n; i++){
        int elem;

        cin >> elem;

        a.push_back(elem);
        searchTime[elem - 1] = i + 1;
    }

    cin >> m;

    long long Vasya = 0, Petya = 0;

    for(int i = 0; i < m; i++){
        int elem;

        cin >> elem;

        Vasya += searchTime[elem - 1];
        Petya += n - searchTime[elem - 1] + 1;
    }

    cout << Vasya << " " << Petya;

    return 0;
}