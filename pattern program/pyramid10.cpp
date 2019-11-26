
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m=1,sum,cal,n,t;
    while(cin>>n)
    {
        l=n-1;
        for(i=0; i<n; i++)
        {
            for(j=0; j<=i; j++)
            {
                cout<<j+1;
            }

            for(j=0; j<l*2; j++)
            {
                cout<<" ";
            }
            l--;
            for(j=i;j>=0;j--)
            {
                cout<<j+1;
            }

            cout<<endl;
        }
    }
}
