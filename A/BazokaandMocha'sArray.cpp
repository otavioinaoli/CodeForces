#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;

    cin >> t;

    while(t--){
        int n;
        vector<int> a;

        cin >> n;

        for(int i = 0; i < n; i++){
            int elem;

            cin >> elem;

            a.push_back(elem);
        }

        int seqs = 1;
        for(int i = 1; i < n && seqs < 3; i++){
            if(a[i] < a[i - 1]){
                seqs++;
            }
        }

        if(seqs > 2){
            cout << "NO\n";
        }else if(seqs == 1 || a[n - 1] <= a[0]){
            cout << "Yes\n";
        }else{
            cout << "NO\n";
        }
    }

    return 0;
}