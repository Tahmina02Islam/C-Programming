#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,n,con,sp=0;
    while(cin>>n)
    {
        con=n;
        for(i=n; i>0; i--)
        {
            for(j=i; j>0; j--)
            {
                cout<<"*";
            }
            for(j=0;j<sp;j++)
            {
                cout<<" ";
            }
            sp=sp+2;
            for(j=i;j>0;j--)
            {
                cout<<"*";
            }
            cout<<endl;
        }
        sp=0;
    }
}
