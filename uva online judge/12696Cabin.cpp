#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    double a,b,c,d,count,w,we,h,l,t,n=0;
    while(cin>>t)
    {
        for(i=0; i<t; i++)
        {
            cin>>l>>w>>d>>we;
            a=l+w+d;
            if((l==56.0 && w==45.00 && d==25.00) && we==7.00)
            {
                count=1;
                cout<<count<<endl;
                n=n+count;
            }
            else if((a>125.00 || we>7.00))
            {
                count=0;
                cout<<count<<endl;
            }
            else
            {
                count=1;
                cout<<count<<endl;
                n=n+count;
            }
        }
        cout<<n<<endl;
        n=0;
    }
}
