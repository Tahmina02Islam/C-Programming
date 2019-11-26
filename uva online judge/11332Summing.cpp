#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,a,b,l=1,p,t,count=0;
    long long int sum=0,val=0,cal,n;
    while(cin>>n)
    {
        if(n>=1 && n<=9)
        {
            cout<<n<<endl;
        }
        else if(n==0)
        {
            break;
        }
        else
        {
            while(n>9){
             for(i=0; n!=0; i++)
             {
                 a=n/10;
                 b=n%10;
                 n=a;
                 sum=sum+b;
             }
             n=sum;
             sum=0;
            }
                cout<<n<<endl;
                /*while(sum>9)
                {
                    //cout<<"Sum "<<sum<<endl;
                    for(i=0; sum!=0; i++)
                    {
                        a=sum/10;
                        b=sum%10;
                        n=a;
                        val=val+b;
                        cout<<val<<endl;
                    }
                }*/

        }
        sum=0;
        val=0;
    }
    return 0;
}
