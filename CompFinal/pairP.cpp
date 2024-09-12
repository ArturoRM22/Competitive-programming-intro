#include <iostream>
#include <vector>
using namespace std;

int main() {
    int numT;
    cin >> numT;
    for (int i = 0; i < numT; i++) {
        int k, m, n;
        cin >> k >> m >> n;
        vector<int> monocarp(m);
        vector<int> polycarp(n);
        vector<int> sequence;

        for(int a = 0; a < m; a++){
            cin >> monocarp[a];
        }

        for(int b = 0; b < n; b++){
            cin >> polycarp[b];
        }

        int monoIndex = 0, polyIndex = 0;
        bool possible = true;

        while(monoIndex < m || polyIndex < n) {
            if(monoIndex < m && monocarp[monoIndex] == 0) {
                sequence.push_back(monocarp[monoIndex]);
                monoIndex++;
                k++;
            } else if(polyIndex < n && polycarp[polyIndex] == 0) {
                sequence.push_back(polycarp[polyIndex]);
                polyIndex++;
                k++;
            } else if(monoIndex < m && monocarp[monoIndex] <= k) {
                sequence.push_back(monocarp[monoIndex]);
                monoIndex++;
            } else if(polyIndex < n && polycarp[polyIndex] <= k) {
                sequence.push_back(polycarp[polyIndex]);
                polyIndex++;
            } else {
                possible = false;
                break;
            }
        }

        if (possible) {
            for(int r = 0; r < sequence.size(); r++){
                cout << sequence[r] << " ";
            }
            cout << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}

/* 
input 
5

3 2 2
2 0
0 5

4 3 2
2 0 5
0 6

0 2 2
1 0
2 3

5 4 4
6 0 8 0
0 7 0 9

5 4 1
8 7 8 0
0


output
2 0 0 5 
0 2 0 6 5 
-1
0 6 0 7 0 8 0 9
-1
 */