//ternary means base of 3.
//decimal means only positive number.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    long long int a,b,c,d,count=0,t,n,ar[100005],p;
    while(cin>>n)
    {
        if(n<0)
        {
            break;
        }
        else if(n==0)
        {
            cout<<n<<endl;
        }
        else
        {
            for(i=0;n!=0;i++)
            {
                a=n/3;
                b=n%3;
                ar[i]=b;
                n=a;
                count++;
            }
            for(i=count-1;i>=0;i--)
            {
                cout<<ar[i];
            }
            cout<<endl;
        }
        count=0;
    }
}
