#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

bool hasMoreThanOneOneOrInvalidDigit(string x){
    int countOnes = 0;

    for(char c : x){
        if(c == '1'){
            countOnes++;
            if(countOnes > 1)
                return true;
        }else if(c != '0'){
            return true;
        }
    }
    return false; 
}

int main() {
    int n;

    cin >> n;

    int removedNumberIndex;
    int totalZeros = 0;
    string different = "1";

    for(int i = 0; i< n; i++){
        string ai;

        cin >> ai;

        if(ai == "0"){
            cout << 0;
            return 0;
        }

        if(hasMoreThanOneOneOrInvalidDigit(ai)){
            different = ai;
        }else{
            totalZeros += ai.size() - 1;
        }

    }

    cout << different;

    for(int j = 0; j < totalZeros; j++){
        cout << 0;
    }

    return 0;
}
