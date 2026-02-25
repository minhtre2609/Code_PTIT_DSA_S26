#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> arr(n);
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        sort(arr.begin(), arr.end());
        
        vector<int> result;
        int left = 0, right = n - 1;
        
        while (left <= right) {
            if (left <= right) {
                result.push_back(arr[right]);
                right--;
            }
            if (left <= right) {
                result.push_back(arr[left]);
                left++;
            }
        }
        
        for (int i = 0; i < n; i++) {
            cout << result[i];
            if (i != n - 1) cout << " ";
        }
        cout << endl;
    }
    return 0;
}
