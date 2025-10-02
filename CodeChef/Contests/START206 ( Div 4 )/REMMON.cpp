#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,a,b;
	cin>>n>>a>>b;
	int ans = n-(a*b);
	if(a<=0) cout<<0<<endl;
	else cout<<ans<<endl;

}
