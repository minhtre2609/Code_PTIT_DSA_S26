#include <bits/stdc++.h>
using namespace std;

long long L[50], B[50];
void tienxuly ()
{
	L[0] = 1; B[0] = 0;
	L[1] = 1; B[1] = 1;
	for (int i = 2; i <= 45; i++)
	{
		L[i] = L[i - 1] + L[i - 2];
		B[i] = B[i - 1] + B[i - 2];
	}
}

long long demB (int m, long long k)
{
	if (k <= 0) return 0;
	if (m == 0) return 0;
	if (m == 1) return 1;
	if (k <= L[m - 1]) return demB(m - 1, k);
	else return B[m - 1] + demB(m - 2, k - L[m - 1]);
}

int main()
{
	tienxuly();
	int t; cin >> t;
	while (t--)
	{
		int n; long long k;
		cin >> n >> k;
		cout << demB(n, k) << endl;
	}
}
