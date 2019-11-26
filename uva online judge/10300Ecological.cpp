#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,sum=0,val;
    long long int sq,fr,owns;
    long long int n,t,p;
    while(cin>>t)
    {
        for(i=0;i<t;i++)
        {
            cin>>n;
            for(j=0;j<n;j++)
            {
                cin>>sq>>owns>>fr;
                sum=sum+(sq*fr);

            }
            cout<<sum<<endl;
            //cout<<"Done"<<endl;
            sum=0;
        }
        sum=0;
    }
}
