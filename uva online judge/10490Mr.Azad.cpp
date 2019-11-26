#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int i,j,k;
    long long int a,b,sum=0,c,d,n,t,flag=0;
    while(cin>>t)
    {
        if(t==0)
        {
            break;
        }
        else
        {
            n=pow(2,t-1)*(pow(2,t)-1);

            for(i=2; i<=n; i++)
            {
                a=n/i;
                if(n%i==0)
                {
                    sum=sum+a;
                }
            }
            cout<<sum<<endl;
            for(i=2;i<=n/2;i++)
            {
               // b=n/2;
               if(n%i==0)
               {
                   flag=1;
               }
            }
            if(sum==n)
            {
               cout<<"Perfect: "<<sum<<"!"<<endl;
            }
            else if(flag==1 && sum!=n)
            {
               // cout<<"Given number is prime. But, NO perfect number is available."<<endl;
            }
            else if(flag==0 && sum!=n)
            {
                //cout<<"Given number is NOT prime! NO perfect number is available."<<endl;
            }
        }
        sum=0;
        flag=0;
    }
}
