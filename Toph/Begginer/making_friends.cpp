#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k=0,count=0;
    long long int t,a,b,n;
    cin>>n;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    cout<<count<<endl;
}

