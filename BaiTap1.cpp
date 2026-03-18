#include <bits/stdc++.h>
using namespace std;

int n, k, m;
string a[50], b[50];

void Try (int st, int pos)
{
	if (pos == k)
	{
		for (int i = 0; i < k; i++) cout << b[i] << " \n"[i == k - 1];
		return;
	}
	for (int i = st; i < m; i++)
	{
		b[pos] = a[i];
		Try(i + 1, pos + 1);
	}
}

int main ()
{
	cin >> n >> k;
	set<string> se;
	for (int i = 0; i < n; i++)
	{
		string x; cin >> x;
		se.insert(x);
	}
	m = 0;
	for (string x : se) a[m++] = x;
	Try(0, 0);
}
