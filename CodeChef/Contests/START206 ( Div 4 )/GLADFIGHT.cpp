#include <bits/stdc++.h>
using namespace std;

long long minSum(int n ){
    return (long long)(n-2);
}
long long maxSum(int n ){
    return (long long)(n-2)*(n-1)/2;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n ;
	    cin>>n;
	    cout<<minSum(n)<<" "<<maxSum(n)<<endl;
	}
}
