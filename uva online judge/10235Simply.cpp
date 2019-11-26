#include<bits/stdc++.h>
using namespace std;
long long int n,t=0, a,p,q,b,flag;

int main()
{
    int i,j,k;
    while(cin>>n)
    {
        flag=0;    p=0; a=0;
        b=n;

        while(b !=0)
        {
            a=a*10;
            a=a+b%10;
            b=b/10;
        }
        for(i=2; i<=sqrt(n); i++)
        {
            if(n%i==0)
            {
                flag=1;
                t=1;
                break;
            }
        }
    //cout<<"flag "<<flag<<endl;
if(t==0){
        for(i=2; i<=sqrt(a); i++)
        {
            if(a%i==0)
            {
                p=1;
                break;
            }
        }
}
       //cout<<"P "<<p<<endl;

        if(n==2 || n==3 ||n==5 ||n==7)
        {
            cout<<n<<" is prime."<<endl;

        }
        else if(flag==1)
        {
            cout<<n<<" is not prime."<<endl;
        }
        else if(flag==0 && p==0 && n!=a)
        {
            cout<<n<<" is emirp."<<endl;
        }
        else
        {
            cout<<n<<" is prime."<<endl;
        }
        t=0;
    }
}
