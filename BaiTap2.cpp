#include <bits/stdc++.h>
using namespace std;

int n, a[50], u[50];\

void in ()
{
	for (int i = 1; i <= n; i++) cout << a[i] << " \n"[i == n];
}

bool check ()
{
	int sum = 0; 
	for (int i = 1; i < n; i++) sum += a[i] - a[i + 1];
	return sum > 0;
}

void Try (int pos)
{
	if (pos > n)
	{
		if (check()) in();
		return;
	}
	for (int i = 1; i <= n; i++)
	{
		if (!u[i])
		{
			u[i] = 1;
			a[pos] = i;
			Try(pos + 1);
			u[i] = 0;
		}
	}
}

int main ()
{
	cin >> n;
	Try(1);
}
