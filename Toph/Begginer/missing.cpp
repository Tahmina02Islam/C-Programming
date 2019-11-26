#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    signed int a,n,c,b,s;
    cin>>n;
    cin>>a>>b>>c;
    for(i=0;i<n;i++)
    {
        s=a+b+c+i;
        if(s==n)
        {
            cout<<i<<endl;
            break;
        }
    }
}
