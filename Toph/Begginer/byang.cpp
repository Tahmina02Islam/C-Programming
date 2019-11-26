#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    long long int t,a,b,p,q,x,y,flag=0,z,d,n,c,sum=0;
    cin>>x>>y;
    for(i=0;b!=0 || q!=0;i++)
    {
        a=x%10;
        b=x/10;
        x=b;

        p=y%10;
        q=y/10;
        y=q;

        sum=a+p;
        cout<<sum<<endl;
        if(sum>9)
        {
           cout<<"Yes"<<endl;
           flag=0;
           break;
        }
         else{
            flag=1;
         }
    }
    if(flag==1)
    {
        cout<<"No"<<endl;
    }
}

