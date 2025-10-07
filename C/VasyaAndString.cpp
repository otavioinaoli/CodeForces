#include <iostream>

using namespace std;

int main() {
    int n, k;

    cin >> n >> k;

    string s;
    
    cin >> s;

    int maxseq = 0, pointer1 = 0, pointer2 = 0, changes = 0;

    while(pointer2 < n){
        if (s[pointer2] == 'b')changes++;
        while(changes > k) {
            if (s[pointer1] == 'b')changes--;
            pointer1++;
        }
        maxseq = max(maxseq, pointer2 - pointer1 + 1);
        pointer2++;
    }

    pointer1 = 0; pointer2 = 0; changes = 0;

    while(pointer2 < n){
        if(s[pointer2] == 'a')changes++;
        while(changes > k){
            if (s[pointer1] == 'a') changes--;
            pointer1++;
        }
        maxseq = max(maxseq, pointer2 - pointer1 + 1);
        pointer2++;
    }

    cout << maxseq;

    return 0;
}