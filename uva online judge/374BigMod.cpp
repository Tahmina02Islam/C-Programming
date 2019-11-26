#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int i,j,k;
    long long int a,b,c,d,n,p,B,P,q,r,M;
    char ch[10000],ar[10000],br[10000];
    while(true)
    {
        B=0;
        P=0;
        M=0;
        scanf("%s%s%s",&ch, &ar, &br);
        a=strlen(ch);
        b=strlen(ar);
        c=strlen(br);
        for(i=0; i<a; i++)
        {
            B=B*10+(ch[i]-'0');
        }
        //cout<<P<<endl;
        for(i=0; i<c; i++)
        {
            M=M*10+(br[i]-'0');
        }
        for(i=0; i<b; i++)
        {
            P=P*10+(ar[i]-'0');
        }
        p=B%M;
        q=P%M;
        r=p*q;
        s=r%M;
        cout<<s<<endl;
        //cout<<M<<endl;
    }

}
