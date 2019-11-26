#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    long long int a,b,c,d,count=0,n,t,flag=0,m,sy,ey;
    while(cin>>t)
    {
        a=1;
        for(i=0; i<t; i++)
        {
            cin>>d>>m>>sy>>ey;

            for(j=sy+1; j<=ey; j++)
            {
                if((j%4==0 && j%100!=0) || (j%400==0))
                {
                    if(m==2 && d==29)
                    {
                        count++;
                        flag=1;
                        //cout<<"year "<<j<<endl;
                    }

                }
            }
            if(flag==1)
            {
                cout<<"Case "<<a<<": "<<count<<endl;
            }
            else if(flag!=1 && m==2 && d==29)
            {
                cout<<"Case "<<a<<": "<<count<<endl;
            }
            else
            {
                b=ey-sy;
                cout<<"Case "<<a<<": "<<b<<endl;
            }
            a++;
            count=0;
            flag=0;
        }


    }
}
