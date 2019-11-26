#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main()
{
    int i,j,k;
    long long int  a,len,b,c,t,n;
    char ch;
    scanf("%d\n",&t);
    while((ch=getchar())!=EOF)
    {
      if(ch=='0')
        {
            cout<<"O";
        }
        else if(ch=='1')
        {
            cout<<"I";
        }
        else if(ch=='2')
        {
            cout<<"Z";
        }
        else if(ch=='3')
        {
            cout<<"E";
        }
        else if(ch=='4')
        {
            cout<<"A";
        }
        else if(ch=='5')
        {
            cout<<"S";
        }
        else if(ch=='6')
        {
            cout<<"G";
        }
        else if(ch=='7')
        {
            cout<<"T";
        }
        else if(ch=='8')
        {
            cout<<"B";
        }
        else if(ch=='9')
        {
            cout<<"P";
        }

        else
        {
            cout<<ch;
        }

    }

    return 0;
}
