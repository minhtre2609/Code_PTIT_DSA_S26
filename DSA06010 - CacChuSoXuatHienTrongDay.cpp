#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		set<long long> se;
		for (long long i = 0; i < n; i++)
		{
			long long x; cin >> x;
			long long tmp = x;
			while (tmp > 0) 
			{
				se.insert(tmp % 10);
				tmp /= 10;
			}
		}
		for (auto x : se) cout << x << " ";
		cout << endl;
	}
}
