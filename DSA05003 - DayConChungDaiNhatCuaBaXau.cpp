#include <bits/stdc++.h>
using namespace std;

int qhd (string s1, string s2, string s3)
{
	int x = s1.length();
	int y = s2.length();
	int z = s3.length();
	vector<vector<vector<int>>> c(x + 1, vector<vector<int>>(y + 1, vector<int>(z + 1, 0)));
	for (int i = 1; i <= x; i++)
	{
		for (int j = 1; j <= y; j++)
		{
			for (int k = 1; k <= z; k++)
			{
				if (s1[i - 1] == s2[j - 1] && s1[i -1] == s3[k - 1]) c[i][j][k] = c[i - 1][j - 1][k - 1] + 1;
				else c[i][j][k] = max(c[i-1][j][k], max(c[i][j-1][k], c[i][j][k-1]));
			}
		}
	}
	return c[x][y][z];
}

int main ()
{
	int t; cin >> t;
	while (t--)
	{
		int x, y, z; cin >> x >> y >> z;
		string s1, s2, s3; cin >> s1 >> s2 >> s3;
		cout << qhd(s1, s2, s3) << endl;
	}
}
