#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int i,j,k;
    double avg,sum,p,a,n;
    while(scanf("%lf%lf",&n,&p)==2)
    {

        sum=pow(p,1/n);         //p^1/n
        //cout<<sum<<endl;
        printf("%lf\n",sum);
    }
}
