#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main()
{
    int i,j,k,count=0;
    int n,flag=0;
    double acc,p,sum,t,r,a,b,v,u;
    while(cin>>a>>v>>u>>t)
    {
        if(a==0 || v==0 || u==0 || t==0)
        {
            break;
        }
        else if(a==1)             //v=u, u=v
        {
            acc=(u-v)/t;
            sum=(v*t)+(.5*acc*t*t);
            count++;
            flag=1;
            //printf("Case %d: %.3lf %.3lf\n",count,sum,acc);
        }
        else if(a==2)
        {
            acc=(u-v)/t;
            sum=(v*acc)+(.5*acc*acc*t);
            count++;
            //printf("Case %d: %.3lf %.3lf\n",count,sum,acc);
             flag=1;

        }
        else if(a==3)
        {
             p=(v*v)+(2*u*t);
             sum=sqrt(p);
             acc=(sum-v)/u;
             count++;
             //printf("Case %d: %.3lf %.3lf\n",count,sum,acc);
             flag=1;
        }
        else if(a==4)
        {
            p=(v*v)-(2*u*t);
            sum=sqrt(p);
            acc=(v-sum)/u;
            count++;
           flag=1;

        }
        if(flag=1)
        {
             printf("Case %d: %.3lf %.3lf\n",count,sum,acc);
        }

    }
    return 0;
}
