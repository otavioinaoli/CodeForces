#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> factoring(int n){
    vector<int> output;
    
    if(n == 2){
        output.push_back(2);
    } else if(n == 3){
        output.push_back(3);
    } else if(n == 4){
        output.push_back(3);
        output.push_back(2);
        output.push_back(2);
    } else if(n == 5){
        output.push_back(5);
    } else if(n == 6){
        output.push_back(5);
        output.push_back(3);
    } else if(n == 7){
        output.push_back(7);
    } else if(n == 8){
        output.push_back(7);
        output.push_back(2);
        output.push_back(2);
        output.push_back(2);
    } else if(n == 9){
        output.push_back(7);
        output.push_back(3);
        output.push_back(3);
        output.push_back(2);
    }

    return output;
}

int main(){
    int n;
    long long a;

    cin >> n >> a;

    vector<int> inpt;

    for(int i = 0; i < n; i++){
        inpt.push_back(a % 10);
        a /= 10;
    }

    vector<int> maximum;

    for(int i = n-1; i >= 0; i--){
        if(inpt[i] > 1){
            vector<int> fac = factoring(inpt[i]);
            for(int j = 0; j < fac.size(); j++)
                maximum.push_back(fac[j]);
        }
    }

    sort(maximum.begin(), maximum.end(), greater<int>());

    for(int i = 0; i < maximum.size(); i++){
        cout << maximum[i];
    }

    return 0;
}