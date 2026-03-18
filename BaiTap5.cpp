#include <bits/stdc++.h>
using namespace std;

int main ()
{
	long long n, k; cin >> n >> k;
	multiset<long long> s;
	for (int i = 0; i < n; i++)
	{
		long long x; cin >> x;
		s.insert(x);
	}
	long long c = 0;
	while (s.size() > 1)
	{
		vector<long long> v;
		long long sum = 0;
		for (int i = 0; i < k && !s.empty(); i++)
		{
			auto it = s.begin();
			v.push_back(*it);
			sum += *it;
			s.erase(it);
		}
		c += v.back() - v.front();
		s.insert(sum);
	}
	cout << *s.begin() << endl;
	cout << c;
	return 0;
}
