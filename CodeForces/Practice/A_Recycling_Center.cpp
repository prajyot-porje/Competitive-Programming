#include <bits/stdc++.h>
using namespace std;

int TotalCost(int n, int c, vector<int> arr) {
    int cost =  0;
    int mul = 1;
    sort(arr.begin(),arr.end(),greater<int>());
    for(int i = 0 ; i<n ; i++){
        if(arr[i]*mul>c){
            cost+=1;
        }else{
            mul= mul*2;
        }
    }
    return cost;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, c;
        cin >> n >> c;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << TotalCost(n, c, arr) << endl;
    }
}