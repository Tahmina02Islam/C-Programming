
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    long long int t,n;
    float a,b,c=1,sum=0,avg;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>a;
            sum=sum+a;
        }
        //cout<<sum<<endl;
        avg=sum/(float)n;
        cout<<"Case "<<c<<": ";
        printf("%.3f\n",avg);
        sum=0;
        c++;
    }
}


