#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int t; cin >> t;
	while (t--)
	{
		int n, x; cin >> n >> x;
		vector<int> v;
		v.reserve(n);
		for (int i = 0; i < n; i++)
		{
			int y; cin >> y;
			v.push_back(y);
		}
		stable_sort(v.begin(), v.end(), [x](int a, int b) {
            return abs(x - a) < abs(x - b);
        });
		for (auto it : v) cout << it << " ";
		cout << endl;
	}
}
