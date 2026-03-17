#include <bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m, max_len = 0;
    cin >> n >> m;
    
    vector<long long> a(n), b(m);
    for (long long &x : a) cin >> x;
    for (long long &x : b) cin >> x;
    
    vector<pair<long long, long long>> ra(n - 1), rb(m - 1);
    for (int i = 0; i < n - 1; i++) {
        long long g = gcd(a[i], a[i+1]);
        ra[i] = {a[i] / g, a[i+1] / g};
    }
    for (int i = 0; i < m - 1; i++) {
        long long g = gcd(b[i], b[i+1]);
        rb[i] = {b[i] / g, b[i+1] / g};
    }
    
    vector<int> dp(m, 0);
    for (int i = 0; i < n - 1; i++) {
        for (int j = m - 2; j >= 0; j--) {
            if (ra[i] == rb[j]) {
                dp[j + 1] = dp[j] + 1;
                max_len = max(max_len, dp[j + 1]);
            } else {
                dp[j + 1] = 0;
            }
        }
    }
    
    cout << max_len + 1 << "\n";
    return 0;
}
