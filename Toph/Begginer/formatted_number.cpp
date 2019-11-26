#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    long long int p=0,a=0,b,c,d,t,count=0,flag=0;
    char n[1000],ar[10000];
    cin>>n;
    int len=strlen(n);
    for(i=len-1; i>=0; i--)
    {
        if(i==0)
        {
            i++;
            flag=1;
        }
        if(p==3 && i!=0)
        {
            ar[a]=',';
            p=0;
            a++;
        }
         if(flag==1)
            {
                i--;
            }
        ar[a]=n[i];
        p++;
        a++;
        if(flag==1)
        {
            break;
        }

    }
    for(i=a-1; i>=0; i--)
    {
        cout<<ar[i];
    }
    cout<<endl;
}
