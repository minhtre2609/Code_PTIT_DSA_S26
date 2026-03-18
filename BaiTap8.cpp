#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n, t; cin >> n >> t;
	vector<int> a(n), c(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i] >> c[i];
	}
	vector<int> v(t + 1, 0);
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= t; j++)
		{
			ans = max(ans, v[j] + c[i]);
		}
		for (int j = t; j >= a[i]; j--)
		{
			v[j] = max(v[j], v[j - a[i]] + c[i]);
		}
	}
	cout << ans;
	return 0;
}

