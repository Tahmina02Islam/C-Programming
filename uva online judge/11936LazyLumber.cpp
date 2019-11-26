#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,p,a,b,c;
    int t,n;
    while(cin>>t)
    {
        for(i=0;i<t;i++)
        {
            cin>>a>>b>>c;
            if((a+b)>c && (a+c)>b && (b+c)>a)
            {
                cout<<"OK"<<endl;
            }
            else{
                cout<<"Wrong!!"<<endl;
            }
        }
    }
}
