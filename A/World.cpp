#include<iostream>

using namespace std;

int main(){
    string world;

    cin >> world;

    int up = 0, low = 0;

    for(char c : world){
        if(c < 97)
            up++;
        else
            low++;
    }

    for(char &c : world){
        if(up > low  && c >= 97)
            c = c - 32;
        else if((up < low || up == low) && c < 97)
            c = c + 32;
    }

    cout << world;

    return 0;
}