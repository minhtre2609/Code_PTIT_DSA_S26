#include <bits/stdc++.h>
using namespace std;

const long long mod = 1e9 + 7;

long long mu(long long n, long long k) 
{
    if(k==0) return 1;
    if(k==1) return n%mod;
    long long temp = mu(n,k/2);
    if(k%2==0) return (temp*temp)%mod;
    else return (((temp*temp)%mod)*n)%mod;
}

long long dao(long long n) 
{
    long long r = 0;
    while (n > 0) 
	{
        r = r * 10 + n % 10;
        n /= 10;
    }
    return r;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long r = dao(n);
        cout << mu(n, r) << '\n';
    }
    return 0;
}
