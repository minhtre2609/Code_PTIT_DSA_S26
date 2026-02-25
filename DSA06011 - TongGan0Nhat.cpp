#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T; cin >> T;
    while (T--) {
        int n; cin >> n;
        vector<int> a(n);
        for (auto &x : a) 
		{
            cin >> x;
        }
        
        int ans = INT_MAX;
        for (int i = 0; i < n - 1; ++i)
        {
        	for (int j = i + 1; j < n; ++j)
        	{
        		if (abs(a[i] + a[j]) < abs(ans)) ans = a[i] + a[j];
			}
		}
        
        cout << ans << endl; 
    }
    
    return 0;
}
