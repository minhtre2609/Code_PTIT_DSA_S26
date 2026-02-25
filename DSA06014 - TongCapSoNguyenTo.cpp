#include <bits/stdc++.h>
using namespace std;

bool nto (int n)
{
	if (n == 2 || n == 3) return true;
	if (n < 2 || n % 2 == 0 || n % 3 == 0) return false;
	for (int i = 5; i * i <= n; i++)
	{
		if (n % i == 0 || n % (i + 2) == 0) return false;
	}
	return true;
}

int main ()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		bool check = false;
		for (int i = 2; i <= n / 2; i++)
		{
			int j = n - i;
			if (nto(i) && nto(j))
			{
				cout << i << " " << j << endl;
				check = true;
				break;
			}
		}
		if (!check) cout << -1 << endl;
	}
}
