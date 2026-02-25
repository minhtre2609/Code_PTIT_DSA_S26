#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int t; cin >> t;
	while (t--)
	{
		int n, k; cin >> n >> k;
		long long a[100000];
		for (int i = 0; i < n; i++)cin >> a[i];
		sort(a, a + n);
		long long res = 0;
		for (int i = 0; i < n-1; i++) {
			res += (lower_bound(a + i + 1, a + n, a[i] + k) - a)-i-1;
		}
		cout << res << endl;
	}
}
