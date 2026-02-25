#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		multiset<long long> a;
	    multiset<long long> b;
	    int n, m; cin >> n >> m;
	    for (long long i = 0; i < n; i++)
	    {
	    	long long x; cin >> x;
	    	a.insert(x);
		}
		for (long long i = 0; i < m; i++)
	    {
	    	long long y; cin >> y;
	    	b.insert(y);
		}
		auto it1 = *a.rbegin();
		auto it2 = *b.begin();
		cout << it1 * it2 << endl;
	}
}
