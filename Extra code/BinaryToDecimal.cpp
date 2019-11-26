#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,val[100],ar[100],count=0,rem,cal=0,n,t,sum=0;
    cout<<"Enter Binary Number: ";
    while(cin>>n)
    {
       for(i=0;n!=0;i++)
       {
           rem=n%10;
           val[i]=rem;
           n=n/10;
           count++;
       }
       for(j=0;j<=(count-1);j++)
       {
           ar[j]=val[j]*pow(2,cal);
           cal++;
           sum=sum+ar[j];
       }
       cout<<sum<<endl;
       count=0;
       sum=0;
       cal=0;
    }
}
