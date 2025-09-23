#include<iostream>

using namespace std;

int main(){
    string path;

    cin >> path;

    string instructions;

    cin >> instructions;

    int pointer = 0;
    for(char t : instructions){
        if(pointer < path.size() && path[pointer] == t){
            pointer++;
        }
    }

    cout << pointer + 1;

    return 0;
}