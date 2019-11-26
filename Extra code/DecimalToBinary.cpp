#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,val[100],cal,count=0,n,t,sum;
    cout<<"Enter Decimal Number :";
    while(cin>>n)
    {
        for(i=0; n!=0;i++)
        {
           val[i]=n%2;
           n=n/2;
           //n=cal;
           count++;
        }
                  // cout<<"c "<<count;

        for(i=(count-1);i>=0;i--)
        {
            cout<<val[i];
        }
        cout<<endl;
        count=0;
    }
}
