#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int maxx = 0, res = -1, half = n / 2;
		map<int, int> mp;
		for (int i = 0; i < n; i++)
		{
			int x; cin >> x;
			mp[x]++;
			if (mp[x] > maxx)
			{
				maxx = mp[x];
				res = x;
			}
		} 
		if (maxx > half) cout << res << endl;
		else cout << "NO" << endl;
	}
}
