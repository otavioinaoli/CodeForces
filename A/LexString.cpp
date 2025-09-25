#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int t;

    cin >> t;

    while(t--){
        int n, m, k;

        cin >> n >> m >> k;

        string a, b, c;

        cin >> a >> b;

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        c = "";

        int pointerA = 0, pointerB = 0, ka = 0, kb = 0;
        while(pointerA < n && pointerB < m){
            if(a[pointerA] < b[pointerB] && ka < k){
                c.push_back(a[pointerA]);
                ka++;
                kb = 0;
                pointerA++;
            }else if(a[pointerA] > b[pointerB] && kb < k){
                c.push_back(b[pointerB]);
                kb++;
                ka = 0;
                pointerB++;
            }else if(ka < k){
                c.push_back(a[pointerA]);
                ka++;
                kb = 0;
                pointerA++;
            }else if(kb < k){
                c.push_back(b[pointerB]);
                kb++;
                ka = 0;
                pointerB++;
            }
        }

        cout << c << "\n";
        
    }

    return 0;
}