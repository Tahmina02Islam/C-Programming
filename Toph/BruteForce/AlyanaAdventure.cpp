#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k=0,flag=0;
    long long int t,a,ar[10000],b,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
      cin>>ar[i];
    }
    b=ar[0];
    for(i=1;i<n;i++)
    {
        if(b<ar[i])
        {
            b=ar[i];
        }
    }
    cout<<b<<endl;

}


