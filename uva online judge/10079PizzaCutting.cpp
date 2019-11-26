#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    long long int t,a,sum=0,b,n;
    while(cin>>n)
    {
        if(n<0)
        {
            break;
        }
        else{
            for(i=0;i<=n;i++)
            {
               sum=sum+i;
            }
            cout<<(sum+1)<<endl;
            //sum=0;
        }
        sum=0;
    }
}
