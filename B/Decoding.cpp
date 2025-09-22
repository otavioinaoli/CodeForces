#include<iostream>

using namespace std;

int main(){
    int n;

    cin >> n;

    string decoded(n, ' '); 

    string coded;

    cin >> coded;
    
    int mid = n / 2;
    if(n % 2 == 0)
        mid -= 1;
    int left = mid - 1, right = mid + 1;
    
    decoded[mid] = coded[0];
    for(int i = 1; i < n; i++){
        if((n - i) % 2 != 0)
            decoded[right++] = coded[i];
        else
            decoded[left--] = coded[i];
    }

    cout << decoded;

    return 0;
}