#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        int a[n+1][m+1];
        for (int i=1; i<=n; i++)
            for (int j=1; j<=m; j++)
                cin >> a[i][j];
                
        int dp[n+1][m+1];
        dp[1][1] = a[1][1];
        
        for (int i=1; i<=n; i++) {
            for (int j=1; j<=m; j++) {
                if (i==1 && j==1) continue;
                int t = 1e9;
                if (i>1) t = min(t, dp[i-1][j]);
                if (j>1) t = min(t, dp[i][j-1]);
                if (i>1 && j>1) t = min(t, dp[i-1][j-1]);
                dp[i][j] = t + a[i][j];
            }
        }
        cout << dp[n][m] << endl;
    }
    return 0;
}
