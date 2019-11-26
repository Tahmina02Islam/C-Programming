
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m=1,sum,cal,n,t;
    while(cin>>n)
    {
        l=n;
        for(i=0; i<n; i++)
        {
            for(j=0; j<l; j++)
            {
             cout<<j+1;
             if(j==l-1)
             {
                 for(k=l-1;k>=1;k--)
                 {
                     cout<<k;
                 }
             }
            }
            cout<<endl;

            for(j=0; j<=i; j++)
            {
                cout<<" ";
            }
            l--;

        }
    }
}

