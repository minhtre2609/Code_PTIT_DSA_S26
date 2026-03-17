#include <bits/stdc++.h>
using namespace std;

string solve() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];
    
    vector<int> B = A;
    sort(B.begin(), B.end());
    
    for (int i = 0; i < N; i++) {
        if (A[i] != B[i]) {
            if (A[N-1-i] != B[i]) return "No";
        }
    }
    return "Yes";
}

int main() {
    int T;
    cin >> T;
    while (T--) cout << solve() << endl;
    return 0;
}
