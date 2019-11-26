#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;     //11849
long long int a,b,c,d,n,t,ar[10000],br[10000],cnt;

int main()
{
    int i,j,k;
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
        cnt=0;
        if(a==0 && b==0)
        {
            break;
        }
        else
        {
            for(i=0; i<a; i++)
            {
               scanf("%lld",ar[i]);
            }
            for(j=0; j<b; j++)
            {
                cin>>br[j];
            }
            for(i=0; i<a; i++)
            {
                for(j=0; j<b; j++)
                {
                    if(ar[i]==br[j])
                    {
                        cnt++;
                    }
                }
            }
            printf("%lld\n",cnt);
        }
    }
    return 0;
}
