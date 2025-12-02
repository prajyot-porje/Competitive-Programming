#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<long long> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        
        long long ans = LLONG_MIN;
        
        for (int l = 0; l < n; l++) {
            long long sum = 0;
            long long max_b = 0;
            
            for (int r = l; r < n; r++) {
                sum += a[r];
                max_b = max(max_b, b[r]);
                
                // With k turns, Alice gets (k+1)/2 turns, Bob gets k/2 turns
                long long alice_turns = (k + 1) / 2;
                long long bob_turns = k / 2;
                
                long long contribution = (alice_turns - bob_turns) * max_b;
                
                ans = max(ans, sum + contribution);
            }
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}