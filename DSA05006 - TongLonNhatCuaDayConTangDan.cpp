#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, max_sum = 0;
    cin >> n;
    vector<int> a(n), dp(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        dp[i] = a[i];
        for (int j = 0; j < i; j++) 
		{
            if (a[i] > a[j]) dp[i] = max(dp[i], dp[j] + a[i]);
        }
        max_sum = max(max_sum, dp[i]);
    }
    
    cout << max_sum << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
