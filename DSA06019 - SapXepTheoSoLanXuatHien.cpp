#include <bits/stdc++.h>
using namespace std;

bool compare(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.second != b.second) {
        return a.second > b.second;
    }
    return a.first < b.first;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int n;
        cin >> n;
        
        unordered_map<int, int> freq;
        vector<int> arr(n);
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            freq[arr[i]]++;
        }
        
        vector<pair<int, int>> freqVec;
        for (const auto& entry : freq) {
            freqVec.push_back({entry.first, entry.second});
        }
        
        sort(freqVec.begin(), freqVec.end(), compare);
        
        for (const auto& p : freqVec) {
            for (int i = 0; i < p.second; i++) {
                cout << p.first << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}
