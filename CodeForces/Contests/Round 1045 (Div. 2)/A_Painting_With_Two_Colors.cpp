#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if(!(cin >> t)) return 0;
    while (t--) {
        long long n, a, b;
        cin >> n >> a >> b;
        bool ok = ((n - b) % 2 == 0) && (a <= b || ((n - a) % 2 == 0));
        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}
