#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l;
    long long int a,b,n,t,count=0;
    long long int val,cal;
    while(scanf("%lld%lld",&a,&b)!=EOF)
    {
        if(a==0 && b==0)
        {
            break;
        }
        else
        {
            for(i=1;i*i<=b;i++)
            {
              cal=i*i;
              if(cal>=a && cal<=b)
              {
                  count++;
              }
            }
        }
        cout<<count<<endl;
        count=0;
    }
}
