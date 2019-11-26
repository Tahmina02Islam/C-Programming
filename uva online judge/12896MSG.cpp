#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,k;
    long long int t,n,p,b,c,e;
    long long int ar[10000],br[10000];

    while(cin>>t)
    {
        for(i=0; i<t; i++)
        {
            cin>>n;
            for(k=0; k<n; k++)
            {
                cin>>ar[k];
            }
            for(k=0; k<n; k++)
            {
                cin>>br[k];
            }
            for(k=0; k<n; k++)
            {
                if(ar[k]==1)
                {
                    if(br[k]==1)
                    {
                        cout<<".";
                    }
                    else if(br[k]==2)
                    {
                        cout<<",";
                    }
                    else if(br[k]==3)
                    {
                        cout<<"?";
                    }
                    else if(br[k]==4)
                    {
                        cout<<"\"";
                    }
                }
                else if(ar[k]==2)
                {
                    if(br[k]==1)
                   {
                       cout<<"a";
                   }
                   else if(br[k]==2)
                   {
                       cout<<"b";
                   }
                   else if(br[k]==3)
                   {
                       cout<<"c";
                   }
                }
                else if(ar[k]==3)
                {
                    if(br[k]==1)
                    {
                        cout<<"d";
                    }
                    else if(br[k]==2)
                    {
                        cout<<"e";
                    }
                    else if(br[k]==3)
                    {
                        cout<<"f";
                    }
                }
                else if(ar[k]==4)
                {
                    if(br[k]==1)
                   {
                       cout<<"g";
                   }
                   else if(br[k]==2)
                   {
                       cout<<"h";
                   }
                   else if(br[k]==3)
                   {
                       cout<<"i";
                   }
                }
                else if(ar[k]==5)
                {
                    if(br[k]==1)
                   {
                       cout<<"j";
                   }
                   else if(br[k]==2)
                   {
                       cout<<"k";
                   }
                   else if(br[k]==3)
                   {
                       cout<<"l";
                   }
                }
                else if(ar[k]==6)
                {
                    if(br[k]==1)
                   {
                       cout<<"m";
                   }
                   else if(br[k]==2)
                   {
                       cout<<"n";
                   }
                   else if(br[k]==3)
                   {
                       cout<<"o";
                   }
                }
                else if(ar[k]==7)
                {
                    if(br[k]==1)
                   {
                       cout<<"p";
                   }
                   else if(br[k]==2)
                   {
                       cout<<"q";
                   }
                   else if(br[k]==3)
                   {
                       cout<<"r";
                   }
                   else if(br[k]==4)
                   {
                       cout<<"s";
                   }
                }
                else if(ar[k]==8)
                {
                    if(br[k]==1)
                   {
                       cout<<"t";
                   }
                   else if(br[k]==2)
                   {
                       cout<<"u";
                   }
                   else if(br[k]==3)
                   {
                       cout<<"v";
                   }
                }
                else if(ar[k]==9)
                {
                    if(br[k]==1)
                   {
                       cout<<"w";
                   }
                   else if(br[k]==2)
                   {
                       cout<<"x";
                   }
                   else if(br[k]==3)
                   {
                       cout<<"y";
                   }
                   else if(br[k]==4)
                   {
                       cout<<"z";
                   }
                }
                else if(ar[k]==0)
                {
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
}
