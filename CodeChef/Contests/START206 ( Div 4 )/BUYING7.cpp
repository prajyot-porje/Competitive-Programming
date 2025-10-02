#include <bits/stdc++.h>
using namespace std;


int FindKmostExpensive(int k,int n, vector<int>arr){
    sort(arr.begin(),arr.end(),greater<int>());
    int ans = 0;
    for(int i = 0 ; i<k && i<n ; i++){
        ans +=arr[i];
    }
    return ans;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int k,n;
	    cin>>n>>k;
	    vector<int> arr(n);
	    for(int i = 0 ; i<n ; i++){
	        cin>>arr[i];
	    }
	    cout<<FindKmostExpensive(k,n,arr)<<endl;
	}
}
