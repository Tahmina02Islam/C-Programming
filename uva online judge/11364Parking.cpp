#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    long long int sum,t,n,ar[10000],val,dif;
    while(cin>>t)
    {
        for(i=0;i<t;i++)
        {
            cin>>n;
            for(j=0;j<n;j++)
            {
                cin>>ar[j];
            }
            sort(ar,ar+j);
            dif=abs(ar[0]-ar[n-1]);
            val=dif*2;
            cout<<val<<endl;
        }
    }
}
