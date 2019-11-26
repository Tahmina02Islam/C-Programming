#include<bits/stdc++.h>
using namespace std;
long long int t,n,p,a,b,maxx,ar[1000001];
int main()
{
    int i,j,k,count=0;
    while(cin>>t)
    {
        for(i=0;i<t;i++)
        {
            cin>>n;
            for(j=0;j<n;j++)
            {
              cin>>ar[j];
            }
            maxx=ar[0];
            for(j=1;j<n;j++)
            {
                if(maxx<=ar[j])
                {
                    maxx=ar[j];
                }
            }
            count++;

            cout<<"Case "<<count<<": "<<maxx<<endl;
        }
        count=0;
    }
    return 0;
}
