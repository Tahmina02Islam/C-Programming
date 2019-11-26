#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l;
    long long int n;
   long long int dv, p,a,b,c,sum;
    while(scanf("%lld%lld",&n,&k)==2)
    {
        a=n;
        sum=n;
        //cout<<"a "<<a<<"sum "<<sum<<endl;
        while(a>=k)
        {
            b=a%k;
            dv=a/k;
            sum=sum+dv;
            a=dv+b;
        }
        cout<<sum<<endl;
    }
    //sum=0;
    //a=0;
     return 0;
}
