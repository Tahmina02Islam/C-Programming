#include<bits/stdc++.h>
using namespace std;
char ar[100005],str[100005];
int main()
{
    //char ar[10000],str[10000];
    //string ar, str;
    int i,j,k;
    int t,n,a,b,c,d,len;

    while(gets(ar))
    {
        len=strlen(ar);
        if(ar[0]=='\0')
        {
            break;
        }
        else
        {
            for(i=0; i<len; i++)
            {
                ar[i]=ar[i]-7;
                //cout<<str[i];
               // printf("%c",str[i]);

            }
            puts(ar);
        }
        //cout<<endl;

    }


    return 0;
}
