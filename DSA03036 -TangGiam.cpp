#include <bits/stdc++.h>
using namespace std;

#define maxn 1000005
int n, m;
int a[maxn], dem[maxn];

int qhd(int a[], int n) 
{
    if (!n) return 0;
    vector<int> t(n, 1), g(n, 1);
    int ans = 0;
    for (int i = 1; i < n; i++) if (a[i] > a[i - 1]) t[i] = t[i - 1] + 1;
    for (int i = n - 2; i >= 0; i--) if (a[i] > a[i + 1]) g[i] = g[i + 1] + 1;
    for (int i = 0; i < n; i++) ans = max(ans, t[i] + g[i] - 1);
    return ans;
}

void solve() 
{
    int N, ans = 0;
    cin >> N;
    vector<double> A(N), B(N);
    vector<int> dp(N, 1);
    for (int i = 0; i < N; i++) 
	{
        cin >> A[i] >> B[i];
        for (int j = 0; j < i; j++) 
		{
            if (A[j] < A[i] && B[j] > B[i]) dp[i] = max(dp[i], dp[j] + 1);
        }
        ans = max(ans, dp[i]);
    }
    cout << ans << "\n";
}

int main() 
{
    ios_base::sync_with_stdio(0); 
	cin.tie(0);
    int t;
    if (cin >> t) 
    {
    	while (t--) solve();
	}
    return 0;
}
