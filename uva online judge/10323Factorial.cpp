#include<bits/stdc++.h>
using namespace std;
int Factorial(long long int n)
{
    if(n>1)
    {
        //int ss=n*Factorial(n-1);
        //cout<<"ss "<<ss<<endl;
        return n*Factorial(n-1);
    }
    else
    {
        return 1;
    }
}
int main()
{
    int i,j,k;
    long long int n,t,p,fact=1,val;
    while(cin>>t)
    {

        if(t>13)
        {
            cout<<"Overflow!"<<endl;
        }
        else if(t==13)
        {
            cout<<"6227020800"<<endl;
        }
        else if(t>=0 && t<=7)
        {
            cout<<"Underflow!"<<endl;
        }
        else if(t<0)
        {
            p=abs(t);
            if(p%2==0)
            {
                cout<<"Underflow!"<<endl;
            }
            else
            {
                cout<<"Overflow!"<<endl;

            }
        }
        else
        {
            Factorial(t);
            cout<<Factorial(t)<<endl;
        }

    }
}
