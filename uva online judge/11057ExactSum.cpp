#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k=0,sum,val,count=0;
    long long int n,t,ar[10000],dif,flag=0,mn=10000;
    int p,a,b;
    while(cin>>t)
    {
        for(i=0; i<t; i++)
        {
            cin>>ar[i];
        }
        cin>>n;

        for(i=0; i<t; i++)
        {
            for(j=i+1; j<t; j++)
            {
                sum=ar[i]+ar[j];
                if(sum==n)
                {
                    dif=abs(ar[i]-ar[j]);
                    if(dif<mn)
                    {
                       mn=dif;
                       flag=1;
                       a=ar[i];
                       b=ar[j];
                    }
                }
            }

        }
        if(flag==1){
                if(a<b)
                {
                    cout<<"Peter should buy books whose prices are "<<a<<" and "<<b<<"."<<endl<<endl;

                }
                 else{
                    cout<<"Peter should buy books whose prices are "<<b<<" and "<<a<<"."<<endl<<endl;

                 }
        }


mn=10000;
sum=0;
    }
    return 0;
}
