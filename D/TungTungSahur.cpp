#include<iostream>

using namespace std;

int main(){

    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        string p, s;
        cin >> p >> s;

        int pointerS = 0, pointerP = 0;
        int tamS = s.size(), tamP = p.size();
        bool saida = false;

        while(pointerP < tamP && pointerS < tamS){
            if(p[pointerP] != s[pointerS]){
                saida = true;
                cout << "NO\n";
                break;
            }

            int aparicoesP = 1;
            while(pointerP + 1 < tamP && p[pointerP] == p[pointerP + 1]){
                aparicoesP++;
                pointerP++;
            }

            int aparicoesS = 1;
            while(pointerS + 1 < tamS && s[pointerS] == s[pointerS + 1]){
                aparicoesS++;
                pointerS++;
            }

            if(aparicoesS < aparicoesP || aparicoesS > 2 * aparicoesP){
                saida = true;
                cout << "NO\n";
                break;
            }

            pointerP++;
            pointerS++;
        }

        if(!saida){
            if(pointerP == tamP && pointerS == tamS){
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }

    return 0;
}
