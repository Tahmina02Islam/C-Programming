#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l;
    long long int a,b,c=0,q,n,t,p=0,count=0,ar[100005];
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        else{
                for(i=0;n!=0;i++)
                {
                     a=n/2;
                     b=n%2;
                     ar[i]=b;
                     //c=(c*10)+b;
                     n=a;
                     count++;
                     if(b==1)
                     {
                         p++;
                     }
                     //cout<<ar[i]<<endl;
                }
                cout<<"The parity of ";
                for(j=count-1;j>=0;j--)
                {
                    cout<<ar[j];
                }
                cout<<" is "<<p<<" (mod 2)."<<endl;
                //cout<<c<<endl;
                p=0;
                c=0;
                count=0;

        }
    }
}
