#include <bits/stdc++.h>
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	while(t--)
	{
		int n, k; cin >> n >> k;
		vector<int> v;
		for (int i = 0; i < n; i++)
		{
			int x; cin >> x;
			v.push_back(x);
		}
		sort(v.rbegin(), v.rend());
		for (int i = 0; i < k; i++)
		{
			cout << v[i] << " ";
		}
		cout << endl;
	}
}
