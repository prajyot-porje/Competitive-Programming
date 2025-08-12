#include <bits/stdc++.h>
using namespace std;

int TotalSteps(int n, vector<int> &a, vector<int> &b)
{
    int iterations = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > b[i])
        {
            iterations += (a[i] - b[i]); 
        }
    }
    return iterations;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        cout << TotalSteps(n, a, b) << endl;
    }
}