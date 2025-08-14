#include <bits/stdc++.h>
using namespace std;

int minutesRequired(int n , vector<int> &arr){
    
    bool already = true;
    
    for(auto c : arr){
        if(c!=1){
            already = false;
            break;
        }
    }
    
    if(already) return 0;
    
    unordered_map<int,int> mp;
    for(int c : arr) mp[c]++;
    int ans = INT_MAX;
    
    for(auto &[col,cnt] : mp){
        if(col == 1) continue;
        int mis = n-cnt;
        ans = min(ans,1+mis);
    }
    
    int all = n-mp[1];
    ans = min(ans,all);
    return ans;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n ;
	    cin>>n;
	    vector<int> arr(n);
	    for(int i = 0; i<n ; i++){
	        cin>>arr[i];
	    }
	    cout<<minutesRequired(n,arr)<<endl;
	}
	return 0;
}
