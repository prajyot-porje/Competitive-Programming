#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int y,r;
        cin>>y>>r;

        y = y/2;
        int total = y+r;

        if(total >= n) cout<<n<<endl;
        else cout<<total<<endl;
        
    }

    return 0;
}