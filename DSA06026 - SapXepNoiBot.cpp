#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n; cin >> n;
	long long a[n + 5];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int step = 1;
	for (int i = 0; i < n - 1; i++)
	{
		bool swapp = false;
		for (int j = 0; j < n - i - 1; j++)
		if (a[j] > a[j + 1])
		{
			swap(a[j], a[j + 1]);
			swapp = true;
		}
		if (swapp)
		{
			cout << "Buoc " << step++ << ": ";
			for (int k = 0; k < n; k++)
			{
				cout << a[k] << " ";
			}
			cout << endl;
		}
	}
}

