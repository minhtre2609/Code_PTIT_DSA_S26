#include <bits/stdc++.h>
using namespace std;

int change (int a, int x, int y)
{
	int b = 0, t = 1;
	while (a > 0)
	{
		int cs = a % 10;
		if (cs == x) cs = y;
		b = cs*t + b;
		t *= 10; 
		a /= 10;
	}
	return b;
}

int main(){
	int a, b; cin >> a >> b;
	int mina = change(a, 6, 5), minb = change(b, 6, 5);
	int maxa = change(a, 5, 6), maxb = change(b, 5, 6);
	cout << mina + minb << " " << maxa + maxb << endl;
}
