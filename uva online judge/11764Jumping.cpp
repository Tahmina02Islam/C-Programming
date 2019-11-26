#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    int a,p,t,b,q,n,ar[10000],count=1,h=0,l=0;
    while(cin>>t)
    {
        for(i=0; i<t; i++)
        {
            cin>>n;
            for(j=0; j<n; j++)
            {
                cin>>ar[j];
            }
              //cout<<"Case "<<count<<": "<<h<<" "<<l<<endl;

                for(j=0; j<n-1; j++)
                {

                    if(ar[j]<ar[j+1])
                    {
                        h++;
                    }
                    else if(ar[j]>ar[j+1])
                    {
                        l++;
                    }

                }
                cout<<"Case "<<count<<": "<<h<<" "<<l<<endl;

            //cout<<"Case "<<count<<": "<<h<<" "<<l<<endl;
            h=0;
            l=0;
            count++;

        }
    }
}
