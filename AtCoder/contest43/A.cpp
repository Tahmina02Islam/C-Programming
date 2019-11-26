#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    long long int a,b,c,sum=0;
    while(cin>>a)
    {
        for(i=1;i<=a;i++)
        {
            sum=sum+i;
        }
        cout<<sum<<endl;
        sum=0;
    }
    return 0;
}
