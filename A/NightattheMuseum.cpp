#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
    string word;

    cin >> word;

    int minRotations = 0;
    char actualLetter = 'a';

    for(char c : word){
        if(abs(c - actualLetter) > 13){
            minRotations += 26 - abs(c - actualLetter);
        }else{
            minRotations += abs(c - actualLetter);
        }

        actualLetter = c;
    }

    cout << minRotations;

    return 0;
}