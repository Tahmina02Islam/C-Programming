#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    long long int n,a,b,c,ar[10000],p,flag,q;
    char ch[100001];
    while(true)
    {
        p=0;
        b=0;
        c=0;
        scanf("%s",&ch);
        a=strlen(ch);
        if(strcmp(ch,"0")==0)
        {
            break;
        }
        else
        {
            for(i=0; i<a; i++)
            {
                b=b*10+(ch[i]-'0');
                b=b%11;

            }

            if(b==0)
            {

                printf("%s is a multiple of 11.\n",ch);


            }
            else
            {

                printf("%s is not a multiple of 11.\n",ch);

            }
        }
    }
}
