#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> v(n);
    vector<int> odd, even;
    
    for (int i = 0; i < n; i++) cin >> v[i];
    
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) odd.push_back(v[i]);
        else even.push_back(v[i]);
    }
    
    sort(odd.begin(), odd.end());
    sort(even.rbegin(), even.rend());
    
    int oddIdx = 0, evenIdx = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) cout << odd[oddIdx++];
        else cout << even[evenIdx++];
        if (i < n - 1) cout << " ";
    }
    cout << endl;
    
    return 0;
}
