#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int c, n;
    if (!(cin >> c >> n)) return 0;

    vector<bool> dp(c + 1, false);
    dp[0] = true;
    int max_w = 0;

    for (int i = 0; i < n; ++i) 
	{
        int w;
        cin >> w;
        for (int j = c; j >= w; --j) 
		{
            if (dp[j - w]) 
			{
                dp[j] = true;
                if (j > max_w) max_w = j;
            }
        }
    }

    cout << max_w;

    return 0;
}
