#include <bits/stdc++.h>

using namespace std;

string OddPrefixSum(int n, vector <int> arr) {
    vector<int> even,odd;
    for(int num:arr){
        if(num%2 == 1){
            odd.push_back(num);
        }else{
            even.push_back(num);
        }
    }
    
    sort(odd.begin(),odd.end(),greater<int>());
    sort(even.begin(),even.end());
    
    vector<int> can;
    can.insert(can.end(),odd.begin(),odd.end());
    can.insert(can.end(),even.begin(),even.end());
    
    int pre = 0;
    for(auto x :  can){
        pre+=x;
        if(pre%2 == 0) return "NO";
    }
    return "YES";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << OddPrefixSum(n, arr) << endl;
    }

}