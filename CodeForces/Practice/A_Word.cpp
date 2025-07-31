#include <bits/stdc++.h>
using namespace std;

string solve(string s) {
    int lower = 0;
    int upper = 0;
    for(auto ch:s){
        if(ch>='a' && ch<='z'){
            lower++;
        }else if(ch>='A' && ch<='Z'){
            upper++;
        }
    }
    if(lower>=upper) transform(s.begin(),s.end(),s.begin(), ::tolower);
    if(upper>lower) transform(s.begin(),s.end(),s.begin(), ::toupper);
    return s;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    cout<< solve(s) << endl;
    return 0;
}
