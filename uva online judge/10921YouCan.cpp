#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    long long int len,a,t,n,b=0;
    char ch[1000000];
    while(gets(ch))
    {
        len=strlen(ch);
        for(i=0;i<len;i++)
        {
            //n=(int)(ch-'0');
            n=atoi(ch);
            //cout<<"n "<<n<<endl;
        }

        a=n%11;
        if(n==0)
        {
            break;
        }
       else if(a==0)
        {
           // b++;
            cout<<n<<" is a multiple of 11."<<endl;
        }
        else
        {
            cout<<n<<" is not a multiple of 11."<<endl;
        }
        //b=0;
    }
}
