#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int i,j,k;
    long long int ar[10000],br[10000],cr[10000],a,b,c,d,q,p;
    while(cin>>a>>b)
    {
        q=0;
        for(i=0;i<32;i++)
        {
            p=a%2;
            ar[i]=p;
            a=a/2;
            //cout<<ar[i]<< " ";
        }
        for(i=0;i<32;i++)
        {
            p=b%2;
            br[i]=p;
            b=b/2;
        }
        for(i=31;0<=i;i--)
        {
            if(ar[i]==br[i])
            {
                cr[i]=0;
            }
            else{
                cr[i]=1;
            }
            //cout<<ar[i]<<endl;
        }
        for(i=31;i>=0;i--)
        {
            //cout<<cr[i]<<" ";
            c=pow(2,i);
            q=q+(cr[i]*c);
            //cout<<q<<" ";
        }
        cout<<q<<endl;
    }
}
