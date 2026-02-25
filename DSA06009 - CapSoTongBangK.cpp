#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int t; cin >> t;
	while(t--)
	{
		int n, k; cin >> n >> k;
		map<int, int> m;
		vector<long long> se;
		int ans = 0;
		for (int i = 0; i < n; i++)
		{
			int x; cin >> x;
			se.push_back(x);
		}
		
		for (auto i : se) 
		{
			ans += m[k-i];
			m[i]++; 
		}
		cout << ans << endl;
	}
}
