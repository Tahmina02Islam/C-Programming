#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,flag=0;
    long long int t,n,p,a,b;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        else
        {
            if(n==1 || n==64 || n==729 || n==4096 || n==15625 || n==46656 || n==117649 || n==262144 || n==531441
                    || n==1000000 || n==1771561 || n==2985984 || n==4826809 || n==7529536 || n==11390625 || n==16777216 ||
                    n==24137569 || n==34012224 || n==47045881 || n==64000000 || n==85766121)
            {

                cout<<"Special"<<endl;
            }
            else
            {
                cout<<"Ordinary"<<endl;
            }
//            for(i=1; i<=n; i++)
//            {
//                a=pow(i,2);
//                b=pow(i,3);
//                cout<<a<<" "<<b<<endl;
//                if(a==b)
//                {
//                    cout<<"Special"<<endl;
//                    break;
//                }
//                else
//                {
//                    flag=1;
//                }
//
//            }
//            if(flag==1)
//            {
//                cout<<"Ordinary"<<endl;
//            }
//            flag=0;


        }
    }
}
