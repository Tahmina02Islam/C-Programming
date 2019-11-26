#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,sum,val,p;
    long long int a,b;
    long long int n;
    int flag=0;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        else
        {
            flag=0;
            for(i=1;i<=100; i++)
            {
                flag=0;
               for(j=1;j<i;j++)
               {

                   sum=pow(i,3)-pow(j,3);
                   if(sum==n)
                   {
                       a=i;
                       b=j;
                       flag=1;
                       cout<<i<<" "<<j<<endl;
                   }
                   flag=0;
               }
            }
           /* if(flag==1)
            {
                cout<<a<<" "<<b<<endl;
                //break;
            }*/
           if(flag==0)
            {
                cout<<"No Solution"<<endl;
            }

        }

    }
}
