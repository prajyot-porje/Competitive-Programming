#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x){
    if(x<2) return false;
    for(int i = 2 ; i*i<=x ; i++){
        if(x%i == 0 ) return false;
    }
    return true;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr(n);
	    for(int i = 0 ; i<n ; i++){
	        cin>>arr[i];
	    }
	    int cnt = 0;
	    for(int i = 0 ; i<n ; i++){
	        for(int j = i+1 ; j<n ; j++){
	            if(isPrime(arr[i]+arr[j])) cnt++;
	        }
	    }
	    cout<<cnt<<endl;
	}
	return 0;
}
