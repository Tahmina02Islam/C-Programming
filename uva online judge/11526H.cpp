#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    unsigned int a[10000],b,c,d,res,n,t;
    while(cin>>t)
    {
        for(i=0; i<t; i++)
        {
            res=0;
            cin>>n;
            for(j=1; j<=n; j++)
            {
                b=n/j;
                res=res+b;
            }
             cout<<res<<endl;
        }
    }
}
