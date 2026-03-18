#include <bits/stdc++.h>
using namespace std;

long long F[50], A[50];

long long cnt(int n, long long k)
{
	if (n == 0) return 1;
	if (n == 1) return 0;
	if (k <= F[n - 1]) return cnt(n - 1, k);
	else return A[n - 1] + cnt(n - 2, k - F[n - 1]);
}

int main ()
{
	F[0] = F[1] = 1;
	A[0] = 1;
	A[1] = 0;
	for (int i = 2; i <= 45; i++) 
	{
		F[i] = F[i - 1] + F[i - 2];
		A[i] = A[i - 1] + A[i - 2];
	}
	int t; cin >> t;
	while (t--)
	{
		int n;
		long long k;
		cin >> n >> k;
		cout << cnt(n, k) << "\n";
	}
	
}

