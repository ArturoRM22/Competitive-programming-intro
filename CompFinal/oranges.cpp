#include <iostream>
#include <cmath>  // For round() function
using namespace std;

int main() {
    int numT;
    cin >> numT;
    for (int i = 0; i < numT; i++) {
        float before, percentage;
        cin >> before;
        cin >> percentage;

        float price = 1.0;
        float newP = percentage / 100.0;
        price = price + (price * newP);
        
        float finalf = before / price;
        //cout << "finalF: " << finalf << endl;
        
        // Use round() before converting to int
        int finali = round(finalf);
        //cout << "finali: " << finali << endl;
        cout << finali << endl;
    }

    return 0;
}


/* 
3
10 25
300 20
550 100

8
250
275
 */