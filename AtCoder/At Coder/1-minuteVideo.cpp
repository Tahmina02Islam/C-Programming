#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    long long int m,n,p,a,b,c,t,ar[10000],count=0;
    cin>>n>>m;

        for(i=0;i<n;i++)
        {
            cin>>ar[i];
             if(ar[i]>=m)
             {
                 count++;
             }
        }
        if(count==n && m*count==60)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;

        }
        count=0;

}
