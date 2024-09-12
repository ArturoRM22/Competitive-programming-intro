#include <iostream>
#include <vector>
using namespace std;

int main() {
    int numT;
    cin >> numT;
    for (int i = 0; i < numT; i++) {
        int numForniture;
        cin >> numForniture;
        vector<string> s(numForniture);
        int b = 0, k = 0, l = 0; 
        int res = 0;
        for(int j = 0; j < numForniture; j++){
            cin >> s[j];
            if(s[j][0] == 'b'){
                b++;
            } else if(s[j][0] == 'l'){
                l++;
            } else {
                k++;
            }
/*             cout << "k: " << k << endl;
            cout << "b: " << b << endl;
            cout << "l: " << l << endl; */
            if(b >= 2 && k >= 1 && l >= 1){
                //cout << "Entered" << endl;
                res++;
                b -= 2;
                l--;
                k--;
            }
        }
        cout << res << endl;
    }

    return 0;
}

/* 
input 
1
6
bedXs
kitchenSS1
kitchen2
bedXs
living12
livingh

output
1
 */