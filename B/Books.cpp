#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n, t;

    cin >> n >> t;

    vector<int> books;

    for(int i = 0; i < n; i++){
        int book;

        cin >> book;

        books.push_back(book);
    }

    int pointer1 = 0, pointer2 = 0, maxseq = 0, time = 0;

    while(pointer2 < n){
        if(books[pointer2] + time <= t){
            time += books[pointer2];
            pointer2++;
        }else{
            time -= books[pointer1];
            pointer1++;
        }
        maxseq = max(maxseq, pointer2 - pointer1);
    }

    cout << maxseq;

    return 0;
}