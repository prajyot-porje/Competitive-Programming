#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long S = 0;
        for (int i = 0; i + 1 < n; i++) {
            S += llabs(a[i] - a[i + 1]);
        }

        long long ans = S; // option: remove nothing

        // remove first
        ans = min(ans, S - llabs(a[0] - a[1]));

        // remove last
        ans = min(ans, S - llabs(a[n - 2] - a[n - 1]));

        // remove middle elements
        for (int i = 1; i + 1 < n; i++) {
            long long cur = S
                - llabs(a[i - 1] - a[i])
                - llabs(a[i] - a[i + 1])
                + llabs(a[i - 1] - a[i + 1]);
            ans = min(ans, cur);
        }

        cout << ans << '\n';
    }
    return 0;
}
