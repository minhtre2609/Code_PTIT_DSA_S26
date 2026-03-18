#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int t; cin >> t;
	while (t--)
	{
		int n; long long k;
		cin >> n >> k;
		vector<long long> a(n);
		for (int i = 0; i < n; i++) cin >> a[i];
		long long ans = 1e18;
		vector<pair<long long, int>> cur;
		for (int i = 0; i < n; i++)
		{
			vector<pair<long long, int>> nxt;
			nxt.push_back({a[i], 1});
			for (auto p : cur)
			{
				long long g = p.first;
				int len = p.second;
				long long ng = __gcd(g, a[i]);
				if (nxt.back().first == ng) nxt.back().second = min(nxt.back().second, len + 1);
				else nxt.push_back({ng, len + 1});
			}
			cur = nxt;
			for (auto p : cur)
			{
				if (p.first == k) ans = min(ans, (long long)p.second);
			}
		}
		if (ans == 1e18) cout << -1 << endl;
		else cout << ans << endl;
	}
}
