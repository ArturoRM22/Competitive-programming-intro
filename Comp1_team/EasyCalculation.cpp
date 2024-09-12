#include<iostream>
#include <cmath>  
#include <vector>
#include <iomanip> 
using namespace std;

//ax + bsin(x) = c
//ax + bsin(x) - c = 0

int main(){
    int num_test;
    cin>>num_test;
    //cout << "num_test: " << num_test << endl;
    vector<vector<int>> inputs(num_test, (vector<int>(3)));
    int a, b, c;
    for(int i = 0; i < num_test; i++){
        cin>>a;
        inputs[i][0] = a;
        cin>>b;
        inputs[i][1] = b;
        cin>>c;
        inputs[i][2] = c;
    }
    double result;
    int len = inputs.size();
    //cout << "inputs size: " << len << endl;
    for(int i = 0; i < len; i++){
        a = inputs[i][0];
        b = inputs[i][1];
        c = inputs[i][2];
        //cout << "a: " << a << " b: " << b << " c: " << c << endl;

        double x = static_cast<double>(c) / a;
        double x_n = x;
        int max_i = 0;

        cout << fixed << setprecision(6); //Para indicar la precision de los decimales 

        while(max_i <= 10){
            //cout << "x: " << x << endl;
            double f_x = a*x + b*sin(x) - c;
            //cout << "f(x): " << f_x << endl;
            double f_x_d = a + b*cos(x);
            //cout << "f'(x): " << f_x_d << endl;
            x_n = x - (f_x/f_x_d);
            //cout << "x_next: " << x_n << endl;
            x = x_n;
            max_i++;
        }
        cout << x_n << endl;
    }
    return 0;
}