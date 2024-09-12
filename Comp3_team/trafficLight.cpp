#include<iostream>
#include<climits>
using namespace std;

int main() {
    int numT;
    cin >> numT;

    for (int i = 0; i < numT; i++) {
        int lenS;
        cin >> lenS;

        char color;
        cin >> color;

        string s;
        cin >> s;

        int max_time = INT_MIN, steps = 0; 

        s += s; //para manejar casos donde los casos circulares

        for (int j = 0; j < lenS * 2; j++) {
            steps = 0;
            if (s[j] == color) {
                while (s[j] != 'g' && j < lenS * 2) {
                    steps++;
                    j++;
                }
                max_time = max(max_time, steps);
            }
        }
        cout << max_time << endl;
    }

    return 0;
}
