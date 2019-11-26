#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n;
    while(cin>>n)
    {
        for(i=n;i>0;i--)
        {
            for(j=0;j<i;j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
    }
}
