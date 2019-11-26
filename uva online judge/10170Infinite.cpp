#include<bits/stdc++.h>
//D=hotel size how many day stay on hotel in highest...
//D=10 means 10ta room ase,tahole koita kore group jaiga dite parbe..
//S=3 no of group 3 group 3 room fix, then increment kore group no. barbe,next day 4 ta group asce.....to be continue...,
using namespace std;
int main()
{
    int i,j,k;
    long long int a,b,c,d,s,t,n;
    while(cin>>s>>d)
    {
        b=0;
        for(i=s; i<d; i++)
        {
            b=b+i;
            if(b>=d)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
}
