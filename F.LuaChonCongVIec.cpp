#include <bits/stdc++.h>
using namespace std;

struct task {
    int deadline, profit;
};

bool cmp(task a, task b) {
    return a.profit > b.profit; 
}

int main() {
    int n;
    cin >> n;

    vector<task> a(n);
    int maxdl = 0;

    for (int i = 0; i < n; i++) 
	{
        cin >> a[i].deadline >> a[i].profit;
        maxdl = max(maxdl, a[i].deadline);
    }

    sort(a.begin(), a.end(), cmp);

    vector<bool> slot(maxdl + 1, false);
    long long tong = 0;

    for (int i = 0; i < n; i++) 
	{
        for (int t = min(maxdl, a[i].deadline); t >= 1; t--) 
		{
            if (!slot[t]) 
			{
                slot[t] = true;
                tong += a[i].profit;
                break;
            }
        }
    }

    cout << tong;
}
