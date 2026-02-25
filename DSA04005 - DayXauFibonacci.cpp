#include <bits/stdc++.h>
using namespace std;

long long f[100];

char fibo(int n, long long k)
{
    if (n == 1) return 'A';
    if (n == 2) return 'B';
    if (k <= f[n - 2]) return fibo(n - 2, k);
    return fibo(n - 1, k - f[n - 2]);
}

int main()
{
    f[1] = 1;
    f[2] = 1;
    for (int i = 3; i <= 92; i++)
        f[i] = f[i - 2] + f[i - 1];

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long k;
        cin >> n >> k;
        cout << fibo(n, k) << endl;
    }
}

