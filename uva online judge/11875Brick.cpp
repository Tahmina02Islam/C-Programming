#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    long long int a[10000],b,c,count=0,d,t,n;
    while(cin>>t)
    {
        for(i=0;i<t;i++)
        {
            count++;
            cin>>n;
            for(j=0;j<n;j++)
            {
               cin>>a[j];
            }
            b=(n/2);
            cout<<"Case "<<count<<": "<<a[b]<<endl;
        }
        count=0;
    }
}
