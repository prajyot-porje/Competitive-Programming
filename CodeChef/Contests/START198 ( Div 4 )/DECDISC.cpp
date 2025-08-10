#include <bits/stdc++.h>
using namespace std;

int minimumCost(int n , vector<int> arr){
    int cost = INT_MAX;
    for(int i = 1 ; i<n ; i++){
        int first = arr[i-1];
        int second = arr[i]/2;
        cost = min(cost,first+second);
        for(int j = i ; j<n ; j++){
            second = arr[j];
            cost = min(cost,first+second);
        }
    }
    return cost;
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
	    cout<<minimumCost(n,arr)<<endl;
	}

}
