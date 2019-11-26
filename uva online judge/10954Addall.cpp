#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    long long int t,n,a,ar[5000],b,c,sum,p=0;
    while(cin>>t)
    {
        if(t==0)
        {
            break;
        }
        else
        {
            for(i=0; i<t; i++)
            {
                cin>>ar[i];
            }
            sort(ar,ar+t);

            sum=ar[0];
            for(j=1; j<t; j++)
            {
                sum=sum+ar[j];
                p=p+sum;
            }
         cout<<p<<endl;
        }

        p=0;
    }
}
