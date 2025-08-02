#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, s;
        cin >> n >> s;
        vector<int> a(n);
        int total = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            total += a[i];
        }

        // If the total sum equals s, no rearrangement is possible
        if (total == s) {
            cout << -1 << "\n";
            continue;
        }

        sort(a.begin(), a.end());
        int currSum = 0;
        bool valid = true;

        // Rearrange the array to avoid any contiguous subsequence summing to s
        for (int i = 0; i < n; ++i) {
            currSum += a[i];
            if (currSum == s) {
                // Swap to break prefix sum
                if (i + 1 < n) {
                    swap(a[i], a[i + 1]);
                } else {
                    valid = false;
                    break;
                }
            }
        }

        // Final validation to ensure no contiguous subsequence sums to s
        currSum = 0;
        for (int i = 0; i < n; ++i) {
            currSum += a[i];
            if (currSum == s) {
                valid = false;
                break;
            }
            if (i < n - 1 && currSum + a[i + 1] == s) {
                valid = false;
                break;
            }
        }

        if (valid) {
            for (int val : a) cout << val << " ";
            cout << "\n";
        } else {
            cout << -1 << "\n";
        }
    }
    return 0;
}