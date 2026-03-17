#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--)
    {
    	long long p; cin >> p;
    	if (p == 0)
    	{
    		cout << "10" << endl;
    		continue;
		}
		if (p == 1)
    	{
    		cout << "1" << endl;
    		continue;
		}
		vector<int> di;
		for (int i = 9; i >= 2; i--)
		{
			while(p % i == 0)
			{
				di.push_back(i);
				p /= i;
			}
		}
		if (p > 1)
    	{
    		cout << "-1" << endl;
    		continue;
		}
		sort(di.begin(), di.end());
		for (int d : di) cout << d;
		cout << endl;
	}
	return 0;
}
