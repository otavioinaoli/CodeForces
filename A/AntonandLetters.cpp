#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector <int> app(26, 0);

    char c;

    cin >> c;

    int letters = 0;
    while(c != '}'){
        if(c != '{' && c != '}' && c != ',' && c != ' '){
            if(app[c - 'a'] == 0)letters++;
            app[c - 'a']++;
        }
        cin >> c;
    }

    cout << letters;

    return 0;
}