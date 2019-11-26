#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,count=0;
     long long int t,c,f;
       double F,C,sum;
       while(cin>>t)
       {
           for(i=0;i<t;i++)
           {
               cin>>c>>f;
                F=((1.8)*c)+32;
                sum=F+f;
                C=((sum-32)*5)/9;
                count++;
                //cout<<"F"<<F<<"C "<<C<<endl;
                printf("Case %d: %.2f\n",count,C);
           //cout<<F<<" "<<C<<endl;
           }


           //cout<<"Case "<<count<<": "<<C<<endl;

       }
}
