#include <bits/stdc++.h>
using namespace std;

int n, k, a[50];

void Try (int i)
{
	for (int j = a[i - 1]; j <= n; j++)
	{
		a[i] = j;
		if (i == k)
		{
			for (int l = 1; l <= k; l++) cout << a[l] << " ";
			cout << "\n";
		}
		else Try(i + 1);
	}
}

int main ()
{
	cin >> n >> k;
	a[0] = 1;
	Try(1);
	return 0;
}
