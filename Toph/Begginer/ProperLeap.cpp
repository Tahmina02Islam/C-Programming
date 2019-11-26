
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k=0,count=0,p=1;
    long long int t,a=0,b=1,n,c;
    cin>>n;
    if(n%4==0 && n%100!=0)
    {
        cout<<"Yes"<<endl;
    }
   else if(n%400==0)
    {
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

}

