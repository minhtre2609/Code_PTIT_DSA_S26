#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n, x; cin >> n >> x;
		long long a[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		long long cnt = 0;
		for (int i = 0; i < n; i++)
		{
			if (a[i] == x) cnt++;
		}
		if (cnt != 0) cout << cnt << endl;
		else cout << -1 << endl;
	}
}
