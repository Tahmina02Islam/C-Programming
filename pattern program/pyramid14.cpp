#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m=1,sum,cal,n,t;

    while(cin>>n)
    {
        char ch=(char)n;
        /*l=n;
        char ch='A';
        for(i=0; i<n; i++)
        {
            for(j=0; j<l; j++)
            {
                cout<<ch++;
            }

            /* for(j=ch;j>='A';j--)
             {
                 printf("%c",j);
             }*/

            /*for(j=0; j<i; j++)
            {
                cout<<" ";
            }
            ch=ch-1;
            for(j=ch;j>='A';j--)
            {
                if(j==ch)
                {
                     cout<<ch;
                }
                else
                {
                    cout<<ch--;
                }

            }
            for(j=0; j<i; j++)
            {
                cout<<" ";
            }

            /*if(j>=l-1)
            {
                cout<<ch;
                ch='A';
                for(j=l;j>=0;j--)
                {
                    cout<<ch--;
                }

            }
            else
            {
                cout<<ch;
                ch++;
            }

            l--;
            ch='A';
            cout<<endl;
        }*/

        for(i=0;i<n;i++)
        {
            for(j='A';j<ch;j++)
            {
                printf("%c",j);
            }
        }

    }
}


