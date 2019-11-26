#include<bits/stdc++.h>
#define m 100000
using namespace std;
int main()
{
    int i,j,k;
    long long int a,b,c,t,x,p=1,r,y,z,count=0,ar[m],br[m],max;
    while(cin>>t)
    {

        for(i=0;i<t;i++)
        {
            cin>>a>>b;
            for(j=a;j<=b;j++)
            {
                int l=sqrt(j);
                for(k=1;k<=l;k++)
                {
                   x=j%k;
                   if(x==0)
                   {
                       count++;
                   }
                }
                ar[p]=count;
                br[p]=j;
                p++;
                count=0;
            }
            max=ar[1];
            for(j=2;j<=p;j++)
            {
                if(ar[j]>max)
                {
                    max=ar[j];
                    r=br[j];
                }
            }
            cout<<r<<" has big "<<max<<" divisor"<<endl;

        }

    }
}
