#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int t; cin >> t;
	while(t--)
	{
		int n, m; cin >> n >> m;
		multiset<long long> c;
		for (int i = 0; i < n; i++)
		{
			int x; cin >> x;
			c.insert(x);
		}
		for (int i = 0; i < m; i++)
		{
			int x; cin >> x;
			c.insert(x);
		}
		for (auto it = c.begin(); it != c.end(); ++it) {
            cout << *it << " ";
        }
        cout << "\n";
	}
}
