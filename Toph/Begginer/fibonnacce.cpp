#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k=0,count=0,p=1;
    long long int t,a=0,b=1,n,c;
    cin>>n;
    for(i=2;i<=n;i++)
    {
      c=a+b;
      a=b;
      b=c;
      p=c;
    }
    cout<<p<<endl;
}
