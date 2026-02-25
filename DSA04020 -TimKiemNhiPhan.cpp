#include <bits/stdc++.h>
using namespace std;

int binary_search(int a[], int n, int x){
    int l = 0, r = n - 1;
    while(l <= r)
	{
        int m = (l + r) / 2;
        if(a[m] == x) return m; 
        else if(a[m] < x) l = m + 1;
        else r = m - 1;
    }
    return -1; 
}
int main ()
{
	int t; cin >> t;
	while (t--)
	{
		long long n, k; cin >> n >> k;
		int a[100005];
		for (int i = 0; i < n; i++) cin >> a[i];
		int tmp = binary_search(a, n, k);
		if (tmp != -1) cout << tmp+1 << endl;
		else cout << "NO" << endl;
	}
}
