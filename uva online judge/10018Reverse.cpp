#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,count=0,flag=0;
    long long int sum,a=0,b,c,n,t,p,ar[1000];
    while(cin>>t)
    {
        for(i=0; i<t; i++)
        {
            cin>>n;
            //p=n;
            sum=n;
Loop:
            while(n!=0)
            {
                a=a*10;
                a=a+(n%10);
                n=n/10;
                if(sum==a)
                {
                    flag=1;
                    //cout<<"sum "<<sum<<"a "<<a<<endl;
                }
                /*if(flag==1)
                {
                    sum=sum+a;
                    count++;
                    n=sum;
                    a=0;
                    flag=0;
                    //cout<<"flag "<<n<<endl;
                    goto Loop;

                }*/
                //goto Loop2;
            }
            //sum=a+n;
//Loop1:
            //cout<<a<<" "<<sum<<endl;
            /*if(sum==a)
             {
               flag=1;
                             //cout<<flag;
             }*/


            while(sum!=a) //|| (sum==a))
            {
                sum=sum+a;
                count++;
                n=sum;
                a=0;
                //cout<<sum<<endl;
                goto Loop;

            }

            if(sum==a)
            {
                cout<<count<<"  "<<sum<<endl;
            }

            count=0;
            a=0;
        }

    }
}
