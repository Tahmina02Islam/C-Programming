#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int k,a,b,sum;
    while(scanf("%lld%lld",&a,&b)!=EOF)
    {
        if(a>b)
        {
            sum=a-b;
            cout<<sum<<endl;
        }
        else{
                sum=b-a;
            cout<<sum<<endl;
        }

    }
}

