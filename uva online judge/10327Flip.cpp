#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,count=0;
    long long int t,n,a,b,c,mx,temp,ar[1000];

    while(cin>>t)
    {
        for(i=0; i<t; i++)
        {
            cin>>ar[i];
        }
        mx=ar[0];
        for(i=1; i<t; i++)
        {
            for(j=0; j<t; j++)             //6 2 1 5 4
            {
                 if(ar[j]<mx)
                 {
                    temp=mx;
                    mx=ar[j];
                    ar[j]=temp;
                     count++;
                 }
            }
        }
       // cout<<count<<endl;
        count=0;
        for(i=0;i<t;i++)
        {
            cout<<ar[i]<<" ";
        }
    }
}
