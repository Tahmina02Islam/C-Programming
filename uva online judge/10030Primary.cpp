#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k;
    unsigned long long count=0,r=0,a,b,sum;
    while((scanf("%llu%llu",&a,&b))==2)
    {
        if(a==0 && b==0)
        {
            break;
        }
        else
        {
            while(a!=0 || b!=0)
            {
                sum=(a%10)+(b%10)+r;
                if(sum>=10)
                {
                    r=sum/10;
                    count++;
                }
                else
                {
                    r=0;
                }
                a=a/10;
                b=b/10;
                // cout<<a<<" "<<b<<endl;
            }
            if(count==0)
            {
                cout<<"No carry operation."<<endl;
            }
            else if(count==1)       //lame error.......eeeeeeeee.e.e.e..e.e.e.e.
            {
                cout<<count<<" carry operation."<<endl;

            }
            else
            {
                cout<<count<<" carry operations."<<endl;
            }
            r=0;
            count=0;
        }
    }
}
