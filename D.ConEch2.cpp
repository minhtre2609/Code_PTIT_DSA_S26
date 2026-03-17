#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k; cin >> n >> k;
    int h[n + 1];
    for (int i = 1; i <= n; i++) cin >> h[i];
	int dp[n + 1];
	for (int i = 1; i <= n; i++) dp[i] = 1e9;
	dp[1] = 0;
	for (int i = 2; i <= n; i++)
	{
		for (int j = 1; j <= k; j++)
		{
			if (i - j >= 1) dp[i] = min(dp[i], dp[i - j] + abs(h[i] - h[i - j]));
		}
	}
	cout << dp[n];
    return 0;
}
