#include "iostream"
#include "bits/stdc++.h"
 
using namespace std;
 
int main(){
    string x;
    int m = 0;
    cin>>x;
    for(int i = 0; i< x.size();i++){
        if(x[i] == 'H'|| x[i] == 'Q' || x[i] == '9'){
            m++;
        }
    }
    if (m > 0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
