#include <bits/stdc++.h>
using namespace std;

int config(int num){
    if(num%2 == 1) return 0;
    else {
        return (num/4)+1;
    }
}

int main(){
    int t ;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<config(n)<<endl;
    }
}