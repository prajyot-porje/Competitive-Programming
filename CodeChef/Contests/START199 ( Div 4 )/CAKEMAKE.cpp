#include <bits/stdc++.h>
using namespace std;
int NumberofCakes(int a , int b){
    if(a>b) return NumberofCakes(b,a);
    return a*(b-1);
}
int main() {
	int a,b;
	cin>>a>>b;
	cout<<NumberofCakes(a,b)<<endl;
}
