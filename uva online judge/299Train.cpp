#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    long long int a,ar[10000],count=0,b,c,temp,d,n,t;
    while(cin>>t)
    {
        for(i=0;i<t;i++)
        {
            cin>>n;
            for(j=0;j<n;j++)
            {
                cin>>ar[j];
            }
            for(j=0;j<n;j++)
            {
                for(k=j+1;k<n;k++)
                {
                    if(ar[j]>=ar[k])
                    {
                        //cerr<<ar[j]<<" ";
                        temp=ar[k];
                        ar[k]=ar[j];
                        ar[j]=temp;
                        count++;

                    }
                }
               // cerr<<endl;
            }
            cout<<"Optimal train swapping takes "<<count<<" swaps."<<endl;
            count=0;
        }
    }
}
