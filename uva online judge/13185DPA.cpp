#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    long long int t,sum=0,n,a,b,c,d;
    while(cin>>t)
    {
        for(i=0; i<t; i++)
        {
            cin>>n;
            for(j=1; j<=n/2; j++)
            {
                if(n%j==0)
                {
                    sum=sum+j;
                }
            }
            //cout<<sum<<endl;
            if(sum<n)
            {
                cout<<"deficient"<<endl;
            }
            else if(sum==n)
            {
                cout<<"perfect"<<endl;
            }
            else if(sum>n)
            {
                cout<<"abundant"<<endl;
            }
            sum=0;
        }
    }
}
