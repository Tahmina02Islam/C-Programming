#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    long long int t,a,b,n,c,p=1,sum=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=1;j<n-i;j++)
        {
            //cout<<" ";
        }
        for(j=0;j<=i;j++)
        {
                if(i==0 && j==0)
                {
                    // cout<<p;
                    p=1;
                }
                else if(j==0)
                {
                    //cout<<"1 ";
                    p=1;
                }
                else if(i==j){
                    //cout<<"1";
                    p=1;
                }
                else{
                    p=p*(i-j+1)/j;
                    //cout<<p<<" ";
                }
                if(i==n-1)
                {
                    //cout<<"p"<<p<<endl;
                    sum=sum+p;
                }
        }
        p=1;
       // cout<<endl;
    }
    cout<<sum<<endl;
}

