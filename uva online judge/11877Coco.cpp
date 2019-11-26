#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    long long int a,b,c,t,n,p,sum=0;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        else{

            for(i=0;n>=3 ; i++)
            {
                a=n/3;
                b=n%3;
                n=a+b;
                sum=sum+a;
            }
        if(n==2)
        {
            sum++;
        }
            cout<<sum<<endl;
            sum=0;
        }
    }
}
