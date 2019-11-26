#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    long long int h,m,p,t,n,h1,m1,h2,m2,home[10000],count=0;
    while(cin>>t){
        for(i=0;i<t;i++)
        {
            scanf("%lld %lld:%lld",n,h1,m1);
            for(j=0;j<n;j++)
            {
             scanf("%lld:%lld %lld",h2,m2,p);
             if(m2<m1)
             {
                 m=(60+m2)-m1;
                 h1=h1+1;
             }
             else
             {
                 m=m2-m1;
             }
             if(h2<h1)
             {
                 h=(h2+24)-h1;
             }
             else
             {
                 h=h2-h1;
             }
             home[count]=(h*60)+m+p;
             count++;

            }
        }
        for(i=0;i<count;i++)
        {
            cout<<home[i]<<endl;
        }
        count=0;
    }
}
