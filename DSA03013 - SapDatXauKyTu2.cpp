#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int t, i ,d ,n; string s;
	cin >> t;
	while (t--)
	{
		cin >> d;
		cin >> s; 
		int a['Z' + 1] = {0}, n = s.size();
		for (int i = 0; i < n; i++) a[s[i]]++;
		int m = *max_element(a, a + 'Z');
		if ((m - 1)*d < n) cout << 1 << endl;
		else cout << -1 << endl;
	}
}
