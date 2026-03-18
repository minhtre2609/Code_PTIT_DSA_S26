#include <bits/stdc++.h>
using namespace std;

long long F[50];
long long mem[50][1000000];

long long cnt(int n, long long k)
{
	if (k == 0) return 0;
	if (n == 0) return 1;
	if (n == 1) return 0;
    if (mem[n][k] != - 1) return mem[n][k];
	
	if (k <= F[n - 1]) mem[n][k] = cnt(n - 1, k);
	else mem[n][k] = cnt(n - 1, F[n - 1]) + cnt(n - 2, k - F[n - 1]);
	return mem[n][k];
}

int main ()
{
	F[0] = 1; F[1] = 1;
	for (int i = 2; i <= 45; i++) F[i] = F[i - 1] + F[i - 2];
	int t; cin >> t;
	while (t--)
	{
		int n;
		long long k;
		cin >> n >> k;
		for (int i = 0; i <= n; i++)
		{
			for (int j = 0; j <= k; j++)
			{
				mem[i][j] = -1;
			}
		}
		cout << cnt(n, k) << endl;
	}
	
}
