#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    long long int a,b,c,d,v,cal,sum=0,p,q,t,n;
    while(cin>>t)
    {
        for(i=0;i<t;i++)
        {
            cin>>n;
    Loop:
            for(j=0; n!=0 ;j++)
            {
              a=n/10;
              b=n%10;
              n=a;
              sum=sum+(b*b);
            }

            if(sum!=1)
            {
                sum=0;
                n=sum;
                cout<<"Sum "<<sum<<endl;
                goto Loop;
            }
            else if(sum==1)
            {
                cout<<"Happy"<<endl;
            }
        }
    }
return 0;
}
