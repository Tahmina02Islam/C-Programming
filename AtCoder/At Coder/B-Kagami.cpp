#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    long long int a,b,c,t,n,ar[1000],br[1000],count,p=0;
    while(cin>>t)
    {
        for(i=0; i<t; i++)
        {
            cin>>ar[i];
            br[i]=-1;
        }


        for(i=0; i<t; i++)
        {
            count=1;
            for(j=i+1; j<t; j++)
            {
                if(ar[i]==ar[j])
                {
                    count++;
                    br[j]=0;          //count holeiee tar position 0 hbe...
                   // cout<<count<<endl;
                }
            }

            if(br[i]!=0)
            {
                br[p]=count;
                p++;
               // cout<<br[i]<<" "<<count<<" "<<p<<endl;
            }

        }


        cout<<p<<endl;
        p=0;
    }
}
