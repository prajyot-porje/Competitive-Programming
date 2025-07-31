#include <bits/stdc++.h>
using namespace std;

int NumberOfBalls(int n,int x ,int y,vector<int> & arr){
    int count =0;
    for(auto ball: arr){
        if(ball>=x && ball<=y){
            count++;
        }
    }
    return count;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,n;
	    cin>>n;
	    cin>>x;
	    cin>>y;
	    vector<int> arr(n+1);
	    for(int i =1 ; i<=n ; i++){
	        cin>>arr[i];
	    }
	    cout<<NumberOfBalls(n,x,y,arr)<<endl;
	}

}
