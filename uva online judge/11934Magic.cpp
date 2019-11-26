#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    long long int a,b,c,ca,pl,d,L,cnt,t,n;
    while(cin>>a>>b>>c>>d>>L)
    {
        cnt=0;
        if(a==0 && b==0 && c==0 && d==0 && L==0)
        {
            break;
        }
        else{
            for(i=0;i<=L;i++)
            {
                ca=(a*i*i)+(b*i)+c;
                if(ca%d==0)
                {
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
}
