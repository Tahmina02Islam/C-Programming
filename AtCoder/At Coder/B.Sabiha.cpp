#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    long long int a,b,c,d,count1=0,count=0,count2=0,p,q,t,n,ar[10000],f1=0,f2=1,f;
    cin>>t;
        for(i=0; i<t; i++)
        {
            cin>>n;
            for(j=0; f1<=n; j++)
            {
               //cout<<f1<<" ";
               if(f1%2==0)
                {
                    count1++;
                }
                else{
                    count2++;
                }
                if(f1==n)
                {

                }
                f=f1+f2;
                f1=f2;
                f2=f;
            }
            cout<<count1<<" "<<count2<<endl;
            //cout<<endl;
            count1=0;
            count2=0;
            f1=0;
            f2=1;
        }
}
