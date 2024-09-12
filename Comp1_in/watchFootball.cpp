#include<iostream>
#include<vector>
#include <cmath>
using namespace std;

int main(){
    int n, c, d;
    cin>>n;
    cin>>c;
    cin>>d;
    int needed = n * d;
    int m = needed - c * d;
    double result = static_cast<double>(m) / c;
    result = ceil(result);
    cout << result << endl;
 return 0;    
}


/* 
input :
10 3 2
output : 
5
 */