#include <bits/stdc++.h>
using namespace std;

int cb(int sum, int n, int M[]) 
{
	int x = 0;
	for (int i = 0; i < n; i++) 
	{
		x += M[i];
		if (x == sum - x + M[i]) return i + 1;
	}
	return -1;
}

int main() {
	int t; cin >> t;
	while (t--) 	
	{
		int n; cin >> n;
		int M[100000];
		int sum = 0;
		for (int i = 0; i < n; i++) 
		{
			cin >> M[i];
			sum += M[i];
		}
		cout << cb(sum, n, M) << endl;
	}
}
