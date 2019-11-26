
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m=1,sum,cal,n,t;

    while(cin>>n)
    {
        char ch='A';
        for(i=0; i<n; i++)
        {
            for(j=0; j<=i; j++)
            {
                cout<<ch<<" ";
                ch++;
            }
            cout<<endl;
        }
    }
}

