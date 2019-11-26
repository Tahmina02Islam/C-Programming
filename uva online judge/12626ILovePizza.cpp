#include<bits/stdc++.h>
using namespace std;
//a=3,r=2,g=1,m=1,i=1,t=1
int main()
{
    int j,k;
    long long int m=0,a=0,r=0,g=0,i=0,t=0,n,b,c,len,count=0;
    char ch[10000];
    while(cin>>n)
    {
        for(j=0; j<n; j++)
        {
            scanf("%s",&ch);
            len=strlen(ch);
            for(k=0; k<len; k++)
            {
                if(ch[k]=='M')
                {
                    m++;
                }
               else if(ch[k]=='A')
                {
                    a++;
                }
                else if(ch[k]=='R')
                {
                    r++;
                }
                else if(ch[k]=='G')
                {
                    g++;
                }
                else if(ch[k]=='I')
                {
                    i++;
                }
                else if(ch[k]=='T')
                {
                    t++;
                }
            }
            //cout<<m<<" "<<a<<" "<<r<<" "<<g<<" "<<i<<" "<<t;


                while(m>=1 && a>=3 && r>=2 && g>=1 && t>=1 && i>=1)
                {
                    count++;
                    m-=1;
                    a-=3;
                    r-=2;
                    g-=1;
                    t-=1;
                    i-=1;
                    //cout<<m<<" "<<a<<" "<<r<<" "<<g<<" "<<i<<" "<<t;
                }

            cout<<count<<endl;
            count=0;
            m=0;a=0;r=0;g=0;i=0;t=0;
        }
    }
}
