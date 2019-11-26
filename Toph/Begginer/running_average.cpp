#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    long long int c,d,n,t;
    double a=0.0,b;
    double p,q,r,s;
    while(cin>>t)
    {
        for(i=0;i<t;i++)
        {
            cin>>p;
            a=p+a;
            b=a/(i+1);
            printf("%.10lf\n",b);

        }
    }
}
