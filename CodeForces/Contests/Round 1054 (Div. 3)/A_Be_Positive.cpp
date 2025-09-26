#include <bits/stdc++.h>
using namespace std;

int findMinCost(vector<int> &arr) {
    int zero = 0, neg = 0;
    for (int a : arr) {
        if (a == 0) zero++;
        else if (a < 0) neg++;
    }

    if (neg % 2 == 0) {
        return zero;
    } else {
        if (zero > 0) return zero + 2;
        else return 2;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        cout << findMinCost(arr) << "\n";
    }
    return 0;
}
