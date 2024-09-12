#include<iostream>
using namespace std;

int main(){
    int sNum; 
    cin >> sNum;

    for(int i = 0; i < sNum; i++){

        int lenS; 
        cin >> lenS;
        string str; 
        cin >> str;

        int left = 0, right = lenS - 1;

        while(left < lenS - 1 && str[left] == 'B') {
            left++;
        }

        while(right >= 0 && str[right] == 'A') {
            right--;
        }

        int ans = right - left;

        if(ans > 0){
            cout << ans << endl;
        }else{
            cout << 0 << endl;
        }
    }
}

/* 
3
2
AB
4
BBBA
4
AABB
 */