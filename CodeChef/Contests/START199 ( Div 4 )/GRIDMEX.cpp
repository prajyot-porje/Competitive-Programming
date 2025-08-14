#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int N;
	    cin>>N;
	    vector<vector<int>> grid(N,vector<int>(N));
	    
	    for(int i = 0 ; i<N; i++){
	        for(int j = 0 ; j<N ; j++){
	            grid[i][j] = (i+j)%N;
	        }
	    }
	    for(int i = 0 ; i<N ; i++){
	        for(int j = 0 ; j<N ; j++){
	            cout<<grid[i][j]<<" ";
	        }
	        cout<<"\n";
	    }
	}
	return 0;
}
