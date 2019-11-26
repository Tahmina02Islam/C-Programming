#include<bits/stdc++.h>
using namespace std;
#define max  100005

int main()
{
    long long int t,n,a,ar[max],b,temp,sum=0,c;
    int i,j,k;
    long long int count=0;
    while(cin>>t)
    {
        for(i=0;i<t;i++)
        {
            cin>>a>>b;
            for(j=0;j<a;j++)
            {
                cin>>ar[j];
            }
           sort(ar,ar+a);
            for(j=0;j<a;j++)
            {
                //cout<<"ar ["<<j<<"]"<<ar[j]<<" ";
                sum=sum+ar[j];
                if(sum>b)
                {
                    //count++;
                    break;
                }

                count++;
            }
            cout<<count<<endl;
            count=0;
            sum=0;

        }
    }
}
