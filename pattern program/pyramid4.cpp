#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,con,sp,n;
    while(cin>>n)
    {
        //1st pyramid....
        sp=n-1;
        for(i=0; i<n; i++)
        {
            for(j=0; j<sp; j++)
            {
                cout<<" ";
            }
            for(k=0; k<=i; k++)
            {
                cout<<"* ";
            }
            cout<<endl;
            sp--;
        }

        //2nd pyramid connect with 1st pyramid...
        con=n;
        sp=0;
        for(i=0;i<n;i++)
        {
             for(j=0;j<i;j++)
            {
                cout<<" ";
            }
            for(j=0;j<con;j++)
            {
                cout<<"* ";
            }
            cout<<endl;
            con--;

        }

    }
}
