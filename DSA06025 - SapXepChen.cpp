#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n; cin >> n;
	int M[1000];
	for (int i = 0; i < n; i++)cin >> M[i];
	for (int i = 1; i <= n; i++) 
	{
		sort(M, M + i);
		cout << "Buoc " << i - 1 << ": ";
		for (int l = 0; l < i; l++)cout << M[l] << " ";
		cout << endl;
	}
}
