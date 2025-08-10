#include <bits/stdc++.h>
using namespace std;

int main() {
	string input;
	cin>>input;
	bool a = false;
	bool c = false;
	bool t = false;
	for(char ch:input){
	    if(ch == 'a'){
	        a = true;
	    }
	    if(ch == 'c'){
	        c = true;
	    }
	    if(ch == 't'){
	        t = true;
	    }
	}
	if(a && c && t) cout<<"YES";
	else cout<<"NO";
	return 0;
}
