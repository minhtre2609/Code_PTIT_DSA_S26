#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        long long n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        
        vector<long long> a(n1), b(n2), c(n3);
        
        for (int i = 0; i < n1; i++) cin >> a[i];
        for (int i = 0; i < n2; i++) cin >> b[i];
        for (int i = 0; i < n3; i++) cin >> c[i];
        
        int i = 0, j = 0, k = 0;
        vector<long long> result;
        
        while (i < n1 && j < n2 && k < n3) {
            if (a[i] == b[j] && b[j] == c[k]) {
                result.push_back(a[i]);
                i++; j++; k++;
                
                while (i < n1 && a[i] == a[i-1]) i++;
                while (j < n2 && b[j] == b[j-1]) j++;
                while (k < n3 && c[k] == c[k-1]) k++;
            }
            else if (a[i] < b[j]) i++;
            else if (b[j] < c[k]) j++;
            else k++;
        }
        
        if (result.empty()) {
            cout << "-1";
        } else {
            for (int i = 0; i < result.size(); i++) {
                cout << result[i];
                if (i != result.size() - 1) cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
