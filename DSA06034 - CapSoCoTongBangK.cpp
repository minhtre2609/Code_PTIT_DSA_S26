#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    
    while (T--) {
        int n;
        long long k;
        cin >> n >> k;
        
        unordered_map<long long, int> mp;        
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            mp[x]++;
        }
        
        long long cnt = 0;
        
        for (auto &p : mp) {
            long long a = p.first;
            long long b = k - a;
            
            if (mp.find(b) != mp.end()) {
                if (a == b) {
                    cnt += (long long)p.second * (p.second - 1);
                } else {
                    cnt += (long long)p.second * mp[b];
                }
            }
        }
        
        cout << cnt / 2 << "\n";
    }
    
    return 0;
}
