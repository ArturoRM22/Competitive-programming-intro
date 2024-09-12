#include<iostream>
using namespace std;

int main() {
    int numT;
    cin >> numT;

    for(int i = 0; i < numT; i++) {
        int sLen, k;
        cin >> sLen;
        cin >> k;
        string s;
        cin >> s;

        int p1 = 0, p2 = 0;
        int numB = 0, numW = 0;

        for(int j = 0; j < k; j++) {
            if(s[j] == 'B') {
                numB++;
            } else {
                numW++;
            }
            p2++;
        }

        int wMin = numW;

        while(p2 < sLen) {
            if(s[p1] == 'B') {
                numB--;
            } else {
                numW--;
            }
            p1++;

            if(s[p2] == 'B') {
                numB++;
            } else {
                numW++;
            }
            p2++;

            wMin = min(wMin, numW);
        }

        cout << wMin << endl;
    }

    return 0;
}
