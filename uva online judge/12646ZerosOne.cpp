#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    long long int a,b,c,d;
    while(cin>>a>>b>>c)
    {
        if(a==1 && b==0 && c==0)
        {
            cout<<"A"<<endl;
        }
        else if(a==0 && b==1 && c==0)
        {
            cout<<"B"<<endl;
        }
        else if(a==0 && b==0 && c==1)
        {
            cout<<"C"<<endl;
        }
        else if(a==1 && b==1 && c==0)
        {
            cout<<"C"<<endl;
        }
        else if(a==1 && b==0 && c==1)
        {
            cout<<"B"<<endl;
        }
        else if(a==0 && b==1 && c==1)
        {
            cout<<"A"<<endl;
        }
        else if(a==1 && b==1 && c==1)
        {
            cout<<"*"<<endl;
        }
        else if(a==0 && b==0 && c==0)
        {
            cout<<"*"<<endl;
        }
    }
    return 0;
}
