#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    double a,b,c,p,q,r,s;
    while(cin>>a>>b>>c)
    {
        s=(a+b+c)/2;
        p=s*(s-a)*(s-b)*(s-c);
        q=(sqrt(p));
        r=(4.0/3.0)*sqrt(p);
        if(r>0)
        {
            printf("%.3lf\n",r);
        }
        else
        {
            r=-1.000;
            printf("%.3lf\n",r);

        }
        //return 0;
    }
}
