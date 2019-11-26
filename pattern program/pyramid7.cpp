#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n,l,st,val;
    while(cin>>n)
    {
        l=n-1;
        for(i=0; i<n; i++)
        {
            for(j=0; j<=i; j++)
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

            //n=n-1;

            val=l*2;
            for(j=0; j<val; j++)
            {
                cout<<" ";
            }

            for(k=0; k<=i; k++)
            {
                st=k%2;
                if(st==0)
                {
                    cout<<st;
                }
                else
                {
                    cout<<st;
                }
            }
            l--;
            cout<<endl;
        }
    }
}
