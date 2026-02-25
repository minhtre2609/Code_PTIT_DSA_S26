#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

struct matran
{
    long long x[2][2];
};

matran operator * (matran a, matran b)
{
    matran c;
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
        {
            c.x[i][j]=0;
            for(int k=0;k<2;k++)
                c.x[i][j]=(c.x[i][j]+a.x[i][k]*b.x[k][j])%MOD;
        }
    return c;
}

matran power(matran a,long long n)
{
    if(n==1) return a;
    matran t = power(a,n/2);
    if(n%2==0) return t*t;
    return t*t*a;
}

int main()
{
    matran a;
    a.x[0][0]=1; a.x[0][1]=1;
    a.x[1][0]=1; a.x[1][1]=0;

    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;

        if(n==0)
        {
            cout<<0<<endl;
            continue;
        }

        matran res = power(a,n);
        cout<< res.x[0][1] << endl;  
    }
}

