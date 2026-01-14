#include <iostream>
#include <vector>

using namespace std;

vector<int> multiplicaPolinomios(vector<int>& A, vector<int>& B){
    int n = A.size();
    int m = B.size();

    vector<int> C(n + m - 1, 0);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            C[i + j] += A[i] * B[j];
        }
    }

    return C;
}

int main(){
    int n;

    cin >> n;

    vector<int> A;
    for(int i = 0; i < n + 1; i++){
        int ai;

        cin >> ai;

        A.push_back(ai);
    }

    vector<int> B = {1, 1};

    bool eh1;
    int steps = 0;

    while(1){
        eh1 = true;
        int n = A.size();
        for(int i = 0; i < n - 1; i++){
            if(A[i] == 1){
                eh1 = false;
                break;
            }      
        }

        if(eh1){
            cout << steps;
            return 0;
        }else{
            steps++;
        }

        if(A[n - 1] == 1){
            A = multiplicaPolinomios(A, B);
            n = A.size();
            A[n - 1] = 0;
            for(int i = 0; i < n; i++){
                if(A[i] == 2){
                    A[i] = 0;
                }      
            }
        }else{
            A.pop_back();
        }
    }
    

    return 0;
}
