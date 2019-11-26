//10^8 hote int doesn't support...
//long long 8bytes = 64bits....

#include<bits/stdc++.h>
using namespace std;
long long int i,j,k;
long long int a,b,c,sum,d,n,t;
void Space (long long int p)
{
    for(i=1; i<=p; i++)
    {
        if(i%2==1)
        {
            sum=sum+i;
        }
    }
    for(i=p-2; i>=1; i--)
    {
        if(i%2==1)
        {
            sum=sum+i;
        }
    }
}
int main()
{
    while(scanf("%lld",&t))
    {
        sum=0;
        for(j=0; j<t; j++)
        {
            //cin>>n;
            scanf("%lld",&n);
            Space(n);
            printf("%lld\n",sum);
            sum=0;
        }

    }
}
