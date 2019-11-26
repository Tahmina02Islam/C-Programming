#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    long long int k,l,a,b,c,p,q;
    long long int t,n,sum;
    while(cin>>n)
    {
        sum=n;
     p=n;

        for(j=0; p>=3;j++)
        {
            a=p/3;
            b=p%3;
            p=a+b;
            sum=sum+a;
        }
         if(p==2)
            {
                sum++;
            }
        cout<<sum<<endl;
    }
    return 0;
}
