#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,n,con,st;
    while(cin>>n)
    {

        for(i=0;i<n;i++)
        {
            con=n-i;
            for(j=0;j<con;j++)
            {
               cout<<" ";
            }
            for(j=0;j<=i;j++)
            {
                st=j%2;
                if(st==0)
               {
                   cout<<st;
               }
               else
               {
                    cout<<st;
               }

            }
            cout<<endl;
        }
    }
}
