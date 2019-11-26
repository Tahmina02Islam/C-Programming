//number of student percentage, not number,
// 2*100/5 or 4*100/7
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    long long int t,n,count=0;
    double a[10000],b,c,avg,sam,sum=0;
    while(cin>>t)
    {
        for(i=0; i<t; i++)
        {
            cin>>n;
            for(j=0; j<n; j++)
            {
                cin>>a[j];
                sum=sum+a[j];
            }
            avg=sum/n;
            //cout<<"ag "<<avg<<endl;
            for(j=0; j<n; j++)
            {
                if(avg<a[j])
                {
                    count++;
                }
            }
            sam=((double)count*100)/n;
            //cout<<sam<<endl;
            printf("%.3lf%%\n",sam);
            count=0;
            sum=0;
        }
    }
}
