//accepted
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k;
   long long int sum=0,val,cal=0,n,t;
    while(cin>>n)
    {
        //n=t+2;
        if(n%2==1){
           for(i=0;n>=1;i++)
        {
            sum=sum+n;
             n=n-2;
        }
        //cout<<sum<<endl;
        val=sum*2+1;
        //cout<<val<<endl;     //7
        for(i=0;i<3;i++)
        {
            val=val-2;
            cal=cal+val;
            //cout<<cal<<"cal "<<endl;

        }
        cout<<cal<<endl;    //9
        sum=0;
        val=0;
        cal=0;

        }

    }
}
