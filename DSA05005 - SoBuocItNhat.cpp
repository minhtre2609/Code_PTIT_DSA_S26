#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, max_len = 0;
    cin >> n;
    vector<int> a(n), dp(n, 1);
    
    for (int i = 0; i < n; i++) 
	{
        cin >> a[i];
        for (int j = 0; j < i; j++) 
		{
            if (a[i] >= a[j]) dp[i] = max(dp[i], dp[j] + 1);
        }
        max_len = max(max_len, dp[i]);
    }
    
    cout << n - max_len << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) 
	{
        solve();
    }
    return 0;
}
