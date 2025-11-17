#include <iostream>

using namespace std;

int main(){
    int n, t, k, d;
    
    cin >> n >> t >> k >> d;

    int t1 = ((n + k - 1) / k) * t;

    cout << ((d + t < t1) ? "YES" : "NO");

    return 0;
}
