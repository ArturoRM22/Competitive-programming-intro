#include<iostream>
#include<vector>
using namespace std;

int main(){
    int len, q_len;
    cin>>len;
    vector<int> a(len);
    for(int i = 0; i < len; i++){
        cin>>a[i];
        //cout << a[i] << endl;
    }
    cin>>q_len;
    //cout << "q_len: "<<q_len << endl;
    vector<int> q(q_len);
    for(int i = 0; i < q_len; i++){
        cin>>q[i];
        //cout << q[i] << endl;
        int l = 0;
        int r = len - 1;
        //cout << "l: " << l <<" r: " << r << endl; 
        int aux = 0;
        while(l <= r){
            int mid = (l + r) / 2;
            //cout << "mid: " << mid << endl;
            //cout << "a[mid]: " << a[mid] <<" q[i]: "<<q[i]<< endl;
            if(a[mid] == q[i]){
                cout << 1 << endl;
                //cout << "query: " << q[i]<< endl;
                aux = 1;
                break;
            }else if(a[mid] < q[i]){
                l = mid + 1;
            }else{
                r = mid - 1;
            }
        }
        if(aux != 1){
            cout << 0 << endl;
        }
    }

 return 0;    
}


/* 
4
1 2 2 4
3
2
3
5
 */