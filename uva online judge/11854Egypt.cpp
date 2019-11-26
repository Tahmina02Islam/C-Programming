#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    long long int a, b, c,sum, cal,p,q,r,flag=0;
    while(scanf("%lld%lld%lld",&a,&b,&c)!=EOF)
    {
        if(a==0 && b==0 && c==0)
        {
            break;
        }
        else
        {
            p=a*a;
            q=b*b;
            r=c*c;
            //sum=abs(r-q);
            if(a>b && a>c)
            {
                sum=abs(q+r);
                if(sum==p)
                {
                    flag=1;
                    //cout<<flag;
                }
            }
            else if(b>a && b>c)
            {
                sum=abs(p+r);
                if(sum==q)
                {
                    flag=1;
                    //cout<<flag;
                }
            }
            else
            {
                sum=abs(p+q);
                if(sum==r)
                {
                    flag=1;
                }
            }
        }
        if(flag==1)
        {
            cout<<"right"<<endl;
        }
        else
        {
            cout<<"wrong"<<endl;
        }
        flag=0;
    }


}
