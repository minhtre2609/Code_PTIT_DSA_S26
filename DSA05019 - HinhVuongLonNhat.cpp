#include <bits/stdc++.h>
using namespace std;

int a[505][505], C[505][505], n, m;

int qhd() {
    int i, j, ans = 0;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= m; j++) {
            if (a[i][j] == 1) {
                C[i][j] = min({C[i-1][j], C[i][j-1], C[i-1][j-1]}) + 1;
                ans = max(ans, C[i][j]);
            } else {
                C[i][j] = 0;
            }
        }
    }
    return ans;
}

int main() {
    int t, i, j;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= m; j++) {
                cin >> a[i][j];
            }
        }

        memset(C, 0, sizeof(C));

        cout << qhd() << endl;
    }
    return 0;
}
