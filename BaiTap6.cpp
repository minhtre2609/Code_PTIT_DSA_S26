#include <bits/stdc++.h>
using namespace std;

int n, k;
string a[50];
set<string> se;

void Try (int i, int st, string s)
{
	if (i == k)
	{
		se.insert(s);
		return;
	}
	for (int j = st; j < n; j++)
	{
		Try(i + 1, j + 1, s + a[j]);
	}
}

int main ()
{
	cin >> n >> k;
	for (int i = 0; i < n; i++) cin >> a[i];
	Try(0, 0, "");
	for (auto x : se) cout << x << endl;
}
