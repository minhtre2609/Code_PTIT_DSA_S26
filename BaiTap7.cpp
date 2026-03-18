#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n;
	long long x, y, z;
	cin >> n >> x >> y >> z;
	vector<long long> a(n), b(n);
	vector<long long> v;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i] >> b[i];
		v.push_back(a[i]);
		v.push_back(b[i] + 1);
	}
	long long ans = 0;
	for (long long s : v)
	{
		long long sum = 0;
		for (int i = 0; i < n; i++)
		{
			if (s < a[i]) sum += x;
			else if (s <= b[i]) sum += y;
			else sum += z;
		}
		ans = max(ans, sum);
	}
	cout << ans;
	return 0;
}
