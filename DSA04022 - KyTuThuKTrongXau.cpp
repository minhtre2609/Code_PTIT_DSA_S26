#include <bits/stdc++.h>
using namespace std;

char tinh (long long n, long long k)
{
	if (n == 1) return 'A';
	long long mid = 1LL << n - 1;
	if (k == mid) return char('A' + (n - 1));
	if (k < mid) return tinh (n - 1, k);
	return tinh(n - 1, k - mid);
}

int main ()
{
	int t; cin >> t;
	while (t--)
	{
		long long n, k; cin >> n >> k;
		cout << tinh(n, k) << endl;
	}
}
