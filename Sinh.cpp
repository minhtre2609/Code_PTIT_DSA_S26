#include <bits/stdc++.h>
using namespace std;
int ok = 0, n, b[25];

void in ()
{
	for (int i = 1; i <= n; i++) cout << b[i] << " ";
	cout << endl;
}

void sinh ()
{
	int i = n;
	while(b[i])
	{
		b[i] = 0; i--;
	}
	if (i == 0) ok = 1;
	else b[i] = 1;
}

int main ()
{
	cin >> n;
	while (!ok)
	{
		in();
		sinh();
	}
}
