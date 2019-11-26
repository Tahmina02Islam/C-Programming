/*Luhn Algorithm*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    long long int ar[100000],p,q,t,n,a,b,m=0,sum=0,r;
    while(cin>>t)
    {
        for(i=0;i<t;i++)
        {
            for(j=0;j<20;j++)
            {
                cin>>ar[j];
                cout<<"ar "<<ar[j];
            }
            for(j=0;j<20;j++)
            {
                if(j%2==1)
                {
                    p=2*ar[j];
                cerr<<"p "<<sum<<endl;

                    if(p<=9)
                    {
                        sum=sum+p;
                        cerr<<"Sum "<<sum<<endl;
                    }
                    else
                    {
                        for(k=0; a!=0; k++)
                        {
                            a=p/10;
                            b=p%10;
                            p=a;
                            sum=sum+b;
                        }
                    }
                    m=m+ar[j];
                }
            }
            r=sum+m;
            n=r/16;
            if(n==0)
            {
                cout<<"Valid"<<endl;
            }
            else
            {
                cout<<"Invalid"<<endl;
            }
            m=0;
            sum=0;
        }
    }
}
