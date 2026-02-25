#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        unordered_map<int, int> pos;
        int res = -1;
        int minPos = n + 1;
        
        for (int i = 0; i < n; i++) 
		{
            int x; cin >> x;
            if (pos.find(x) != pos.end()) 
			{
                if (pos[x] < minPos) 
				{
                    minPos = pos[x];
                    res = x;
                }
            } 
			else pos[x] = i;
        }
        
        if (res != -1) cout << res << "\n";
		else cout << "NO\n";
    }
    
    return 0;
}
