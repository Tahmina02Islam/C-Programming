#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,c,d,p,temp,q,t;
    int i,j,k,count=0,n=0,flag=0;
    while(scanf("%lld%lld",&a,&b)!=EOF)
    {
        n++;
        if(a<0 && b<0)
        {
            break;
        }
        else
        {
            printf("Case %d: A = %lld, limit = %lld, number of terms = ",n,a,b);
            p=a;

            while(p<=b)
            {

                if(p%2==0)
                {
                    p=p/2;
                }
                else
                {
                    p=p*3+1;
                }

                count++;
                if(p==1)
                {
                    count++;
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                cout<<count<<endl;
            }
            else
            {
                printf("%d\n",count);
            }
            count=0;
            flag=0;
        }
    }
}
