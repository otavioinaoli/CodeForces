#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;

    cin >> n;

    vector<int>cards;

    for(int i = 0; i < n; i++){
        int card;

        cin >> card;

        cards.push_back(card);
    }

    long sereja = 0, dima = 0;

    int right = n - 1, left = 0, p1 = 1, p2 = 0;

    while(right >= left){
        if(p1 && cards[right] > cards[left]){
            sereja += cards[right];
            right--;
            p1 = 0;
            p2 = 1;
        }else if(p1 && cards[right] <= cards[left]){
            sereja += cards[left];
            left++;
            p1 = 0;
            p2 = 1;
        }else if(p2 && cards[right] > cards[left]){
            dima += cards[right];
            right--;
            p2 = 0;
            p1 = 1;
        }else{
            dima += cards[left];
            left++;
            p2 = 0;
            p1 = 1;
        }
    
    }

    cout << sereja << " " << dima;

    return 0;
}