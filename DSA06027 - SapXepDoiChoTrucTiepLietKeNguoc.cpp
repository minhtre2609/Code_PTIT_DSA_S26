#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int M[100000];
        for (int i = 0; i < n; i++) cin >> M[i];
        
        vector<string> steps; 
        
        int step_count = 0;
        for (int i = 0; i < n - 1; i++) 
        {
            for (int j = i + 1; j < n; j++) 
            {
                if (M[i] > M[j]) 
                {
                    swap(M[i], M[j]);
                }
            }
            
            step_count++;
            string step = "Buoc " + to_string(step_count) + ": ";
            for (int l = 0; l < n; l++) 
            {
                step += to_string(M[l]) + " ";
            }
            steps.push_back(step);
        }
        
        for (int i = steps.size() - 1; i >= 0; i--) 
        {
            cout << steps[i] << endl;
        }
    }
    return 0;
}
