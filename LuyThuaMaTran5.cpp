#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;
const int MAXN = 10;

int N;
ll K;

struct Matrix {
    ll m[MAXN][MAXN];
    Matrix() {
        memset(m, 0, sizeof(m));
    }
    Matrix operator*(const Matrix& other) const {
        Matrix res;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                for (int k = 0; k < N; k++) {
                    res.m[i][j] = (res.m[i][j] + m[i][k] * other.m[k][j]) % MOD;
                }
            }
        }
        return res;
    }
};

Matrix powMatrix(Matrix a, ll k) {
    Matrix res;
    for (int i = 0; i < N; i++) {
        res.m[i][i] = 1; 
    }
    while (k > 0) {
        if (k & 1) res = res * a;
        a = a * a;
        k >>= 1;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while (T--) {
        cin >> N >> K;
        Matrix mat;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cin >> mat.m[i][j];
            }
        }
        
        Matrix result = powMatrix(mat, K);
        
        ll sum = 0;
        for (int j = 0; j < N; j++) {
            sum = (sum + result.m[N - 1][j]) % MOD;
        }
        
        cout << sum << "\n";
    }
    
    return 0;
}
