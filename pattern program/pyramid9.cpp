#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m=1,sum,cal,n,t;
    while(cin>>n)
    {
        l=n-1;
        for(i=0;i<n;i++)
        {
            for(j=0;j<l;j++)
            {
                cout<<" ";
            }

            for(j=0;j<m;j++)
            {
                cout<<j+1;
            }
            m=m+2;
            l--;

            cout<<endl;
        }
    }
}
