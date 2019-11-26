#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,p;
    long long int t,n,a,b;
    while(cin>>t)
    {
        for(p=0; p<t; p++)
        {
           scanf("%lld %lld",&a, &b);
            for(k=0; k<b; k++)
            {
                for(i=1; i<=a; i++)
                {
                    for(j=1; i>=j; j++)
                    {
                        cout<<i;
                    }
                    cout<<endl;
                }

                for(i=a-1; i>=1; i--)
                {
                    for(j=1; j<=i; j++)
                    {
                        cout<<i;
                    }
                    cout<<endl;
                }
                //cout<<endl;
                if(p!=t-1 || k!=b-1)
                {
                    cout<<endl;
                }
            }
        }

        // cout<<endl;
    }
    return 0;
}
