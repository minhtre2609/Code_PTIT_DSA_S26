#include <bits/stdc++.h>
using namespace std;

int main() 
{
        int n; cin >> n;
        int M[100000];
        for (int i = 0; i < n; i++) cin >> M[i];
        
        vector<string> steps;
        
        for (int i = 0; i < n - 1; i++) 
        {
            int min_idx = i;
            for (int j = i + 1; j < n; j++) 
            {
                if (M[j] < M[min_idx]) 
                {
                    min_idx = j;
                }
            }
            
            if (min_idx != i) 
            {
                swap(M[i], M[min_idx]);
            }

            string step = "Buoc " + to_string(i + 1) + ": ";
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
    return 0;
}
