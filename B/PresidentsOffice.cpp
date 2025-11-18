#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n, m;

    cin >> n >> m;

    char president;

    cin >> president;

    vector<vector<char>> office(n, vector<char>(m));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> office[i][j];
        }
    }

    vector<int> app(26, 0);
    int letters = 0;

    app[president - 'A']++;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(office[i][j] == president){
                 if(i - 1 >= 0 && office[i - 1][j] != '.'){
                    if(app[office[i - 1][j] - 'A'] == 0) letters++;
                    app[office[i - 1][j] - 'A']++;
                }
                if(i + 1 < n && office[i+1][j] != '.'){
                    if(app[office[i + 1][j] - 'A'] == 0) letters++;
                    app[office[i + 1][j]- 'A']++;
                }
                if(j - 1 >= 0 && office[i][j-1] != '.'){
                    if(app[office[i][j - 1] - 'A'] == 0) letters++;
                    app[office[i][j - 1]- 'A']++;
                }
                if(j + 1 < m && office[i][j+1] != '.'){
                    if(app[office[i][j + 1] - 'A'] == 0) letters++;
                    app[office[i][j + 1]- 'A']++;
                }

            }
        }
    }

    cout << letters;

    return 0;
}