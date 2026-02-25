#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		multiset<int> se;
		for (int i = 0; i < n; i++)
		{
			int x; cin >> x;
			se.insert(x);
		}
		int l = *se.begin(), r = *se.rbegin(), cnt = 0;
		for (int i = l + 1; i < r; i++)
		{
			if (se.find(i) == se.end()) cnt++;
		}
		cout << cnt << endl;
	}
}
