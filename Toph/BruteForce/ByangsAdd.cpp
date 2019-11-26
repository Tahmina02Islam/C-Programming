#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    long long int a,b,c,d,t,n,p,q;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a>>b>>c;
        if(a>b && a>c)
        {
            p=b+c;
            q=a;
        }
        else if(b>a && b>c)
        {
            p=a+c;
            q=b;
        }
        else{
            p=a+b;
            q=c;
        }
        if(p>=q)
        {
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }

    }
}
