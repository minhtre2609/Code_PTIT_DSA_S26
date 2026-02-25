#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int t; cin >> t;
	while(t--)
	{
		long long n; cin >> n;
		set<long long> v;
		for (long long i = 0; i < n; i++)
		{
			long long x; cin >> x;
			v.insert(x);
		}
		auto it1 = v.begin();
		if (v.size() == 1) cout << -1 << endl;
		else 
		{
			auto it1 = v.begin();
			int first = *it1;
			++it1;
			int second = *it1;
			cout << first << " " << second << endl;
		}

	}
}
