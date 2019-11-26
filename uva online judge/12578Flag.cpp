#include<bits/stdc++.h>
#include<math.h>
#define pi acos(-1)  //pi value
using namespace std;
//10:2=5:1=l:r   ,circle=pr*r*r
//10:6=5:3=l:w   ,rectangle=l*w
int main()
{
    double a,b,c,t,n,r,w;
    int i,j,k;
    while(cin>>t)
    {
        for(i=0;i<t;i++)
        {
            cin>>n;
            r=n/5;
            a=pi*r*r;
            w=(3*n)/5;
            b=w*n;
            c=b-a;
            printf("%.2lf %.2lf\n",a,c);
        }
    }
}
