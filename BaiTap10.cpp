#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		vector<long long> a(n), b(n);
		for (int i = 0; i < n; i++) cin >> a[i] >> b[i];
		long long ans = 0;
		for (int i = 0; i < n; i++)
		{
			int j = i;
			while (j < n && a[j] == a[i]) j++;
			int len = j - i;
			if (len > 1)
			{
				vector<long long> cost;
				for (int k = i; k < j; k++) cost.push_back(b[k]);
				sort(cost.begin(), cost.end());
				for (int k = 0; k < len / 2; k++) ans += cost[k];
			}
			i = j;
		}
		cout << ans << endl;
	}
}
