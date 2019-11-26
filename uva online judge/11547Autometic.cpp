#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n, sum,val,cal, p,t,u;
    while(cin>>t)
    {
        for(i=0; i<t; i++)
        {
            cin>>n;
            sum=(((n*567)/9)+7492)*235;
            val=sum/47;
            cal=val-498;
            //cout<<cal<<endl;
            for(j=0; j<2; j++)
            {
                p=cal/10;
                u=cal%10;
                cal=p;
            }
            if(u>=0)
            {
                cout<<u<<endl;
            }
            else
            {
                u=-u;
                cout<<u<<endl;
            }
        }

    }
}
