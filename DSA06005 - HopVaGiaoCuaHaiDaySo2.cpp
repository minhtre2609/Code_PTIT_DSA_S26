#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int t;cin >> t;
	while (t--)
	{
		int n, m; cin >> n >> m;
		map<int, int> a;
		for (int i = 0; i < n; i++)
		{
			int x; cin >> x;
			a[x]++;
		}
		for (int i = 0; i < m; i++)
		{
			int y; cin >> y;
			a[y]++;
		}
		for (auto it = a.begin(); it != a.end(); it++)
		{
			cout << it->first << " ";
		}
		cout << endl;
		bool check = true;
		for (auto it = a.begin(); it != a.end(); it++)
		{
			if (it->second >= 2)
			{
				cout << it->first << " ";
				check = false;
			}
		}
		cout << endl;
	}
}
