#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,count=0,sum=1;
    int n,t,a=1,b;
    while(cin>>n)
    {
        if(n==-1)
        {
            break;
        }
        else
        {
            //for(i=0;n>sum;i++)
            if(n<=2)
            {
                count=1;
            }
            else
            {
                //sum=sum*2;
                for(i=1; i<=n;i=sum)
                {

                    sum=sum*2;
                    count++;
                    cout<<"Sum "<<sum<<endl;
                }
            }

            //cout<<"Case "<<a<<": "<<count<<endl;
        }
        cout<<"Case "<<a<<": "<<count<<endl;
        a++;
        count=0;
        sum=1;
    }
}
