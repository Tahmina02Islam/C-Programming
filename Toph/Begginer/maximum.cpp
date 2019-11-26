#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    long long int a,b,ar[1000],n,max,t;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>ar[i];
    }
    max=ar[0];
    for(i=1; i<t; i++)
    {
        if(max<ar[i])
        {
            max=ar[i];
        }
    }
    cout<<max<<endl;
}

