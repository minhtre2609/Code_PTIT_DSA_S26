#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b; cin >> a >> b;
    vector<int> tonguoc(b + 1, 1);
    for (int i = 2; i <= b; i++)
    {
    	for (int j = i * 2; j <= b; j+=i)
    	{
    		tonguoc[j] += i;
		}
	}
	int cnt = 0;
    for (int i = a; i <= b; i++)
    {
    	if (tonguoc[i] > i) cnt++;
	}
	cout << cnt << endl;
}
