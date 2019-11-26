#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    long long int a,e,f,g,b,c,sum,p=0,q=0,t,n;
    while(cin>>t)
    {
        for(i=0; i<t; i++)
        {
            cin>>e>>f>>g;
            sum=(e+f);
            for(j=0; sum>=g; j++)
            {
                // cout<<a<<endl;
                a=sum/g;
                b=sum%g;
                p=p+a;
                //q=q+b;
                sum=a+b;
                //j++;
                //cout<<"a "<<a<<"b "<<b<<endl;
                //cout<<"p "<<a<<endl;
            }
            cout<<p<<endl;
            p=0;
            q=0;
            //a=999;
            // sum=0;
        }

    }
}
