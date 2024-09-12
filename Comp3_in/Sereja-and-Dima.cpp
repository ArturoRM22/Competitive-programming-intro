#include<iostream>
#include<vector>
//#include <algorithm>
using namespace std;

int main(){
    int numCards;
    cin>>numCards;

    vector<int> cards(numCards);

    for(int i = 0; i < numCards; i++){
        cin>>cards[i];
        //cout << cards[i] << endl;
    }

    int turn = 0;
    int sereja = 0;
    int dima = 0;
    int l = 0, r = numCards - 1;
    while(l <= r){
        int currMax = max(cards[l], cards[r]);
        //cout << "currMax:" << currMax << endl;
        if(turn == 0){
            sereja += currMax;
            turn = 1;
        }else{
            dima += currMax;
            turn = 0;
        }
        if(currMax == cards[l]){
            l++;
        }else{
            r--;
        }
    }
    cout << sereja << " " << dima << endl; 
    return 0;
}

/* 7
1 2 3 4 5 6 7 */
