#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    long long int n,t,a,b,dif,s,sum,cal;
    while(cin>>t)
    {
        for(i=0;i<t;i++)
        {
            cin>>a>>b;
            sum=(a+b);
            s=sum/2;
            dif=abs(s-b);
            if(sum%2==0 && a>=b)
            {
                cout<<s<<" "<<dif<<endl;
            }
            else
            {
                 cout<<"impossible"<<endl;
            }

        }
    }
}
