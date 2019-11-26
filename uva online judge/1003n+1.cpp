#include<bits/stdc++.h>
using namespace std;
//1-10 single vabe sob gulan re check dite hbe and loop koiber entry tar count ar value
int main()
{
    int i,j,k;
    long long int count=1,a,b,c,d,n,t=0,p;
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
        printf("%lld %lld ",a,b);
        if(a>b)
        {
            c=a;
            a=b;
            b=c;
        }

        for(i=a; i<=b; i++)
        {
            n=i;
            while(n>1)
            {
                if(n%2==0)
                {
                    n=n/2;
                }
                else
                {
                    n=(3*n)+1;
                }
                count++;
            }
            if(count>=t)      //max count from each value such as 1 2 3 4 ...10
            {
                t=count;
            }
            count=1;
        }
        //cout<<a<<" "<<b<<" "<<t<<endl;
        printf("%lld\n",t);
         t=0;
    }
}
