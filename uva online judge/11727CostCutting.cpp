#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int p=1, a,b,c,sum,min=0,t;
    while(cin>>t)
    {
        for(int i=0; i<t; i++)
        {
            cin>>a>>b>>c;
            if((b>a && b<c) || (b<a && b>c))
            {
                cout<<"Case "<<p<<": "<<b<<endl;
                p++;
            }
            else if((c<a && c>b) || (c>a && c<b))
            {
                cout<<"Case "<<p<<": "<<c<<endl;
                p++;
            }
            else
            {
                cout<<"Case "<<p<<": "<<a<<endl;
                p++;
            }

        }
          p=1;
    }
}
