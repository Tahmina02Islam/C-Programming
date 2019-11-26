#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k=0,flag=0;
    long long int t,a,b,n;
    cin>>n;
    for(i=2;i<=n/2;i++)
    {
       if(n%i==0)
       {
           flag=1;
           break;
       }
    }
    if(flag==0)
    {
        cout<<"Yes"<<endl;
    }
    else{
         cout<<"No"<<endl;
    }
}

