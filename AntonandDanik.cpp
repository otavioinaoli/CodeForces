#include<iostream>
using namespace std;

int main(){
    int n, a = 0, d = 0;

    cin >> n;

    string winners;

    cin >> winners;

    for(char w : winners){
        if(w == 'A')
            a++;
        else
            d++;
        
    }

    if(a > d)
        cout << "Anton";
    else if(a < d)
        cout << "Danik";
    else
        cout << "Friendship";
    
    return 0 ;
}