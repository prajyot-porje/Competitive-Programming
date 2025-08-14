#include <bits/stdc++.h>
using namespace std;

int indexOfBrick(int n , vector<int> &arr){
    int ans = 1;
    int i = 1;
    while(i<=n){
        bool found = false;
        for(int j=i+1 ; j<=n ; j++){
            if(arr[i]<arr[j]){
                ans = j;
                i = j;
                found = true;
                break;
            }
        }
        if(!found) break;
    }
    return ans;
}

int main() {
	int t ;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr(n+1);
	    for(int i = 1 ; i<=n ; i++){
	        cin>>arr[i];
	    }
	    cout<<indexOfBrick(n,arr)<<endl;
	}

}
