#include <bits/stdc++.h>
using namespace std;

const long long mod= 1e9 + 7;

long long mu (long long n, long long k)
{
	long long res = 1;
	n %= mod;
	while (k > 0)
	{
		if (k % 2 == 1)
		{
			res = res * n % mod;
		}
		n = n * n % mod;
		k /= 2;
	}
	return res;
}

int main ()
{
	long long n, k;
	while (cin >> n >> k)
	{
		if (n == 0 && k == 0) break;
		cout << mu(n, k) << endl;
	}
	return 0;
}
