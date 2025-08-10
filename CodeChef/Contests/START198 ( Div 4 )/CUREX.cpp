#include <bits/stdc++.h>
using namespace std;

string isPossible(long long a1,long long b1,long long a2 ,long long b2){
    if(a1 == a2 && b1 == b2 ) return "YES";
    
    long long val1 = 5*a1+b1;
    long long val2 = 5*a2+b2;
    
    if(val1>= val2 && (val1-val2)%6 == 0) return "YES";
    
     
    return "NO";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
	    long long a1,a2,b1,b2;
	    cin>>a1>>b1>>a2>>b2;
	    cout<<isPossible(a1,b1,a2,b2)<<endl;
	}
	return 0;

}
