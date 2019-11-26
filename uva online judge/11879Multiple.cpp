#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int i,j,k;
    char ch[100001];
    long long int a,t,n,b=0;
    while(true)
    {
        n=0;
        scanf("%s",&ch);
        //n=(ch[i]-'0');
        a=strlen(ch);
        if(strcmp(ch,"0")==0)
        {
            break;
        }
        else
        {
            for(i=0; i<a; i++)
            {
                n=n*10+(ch[i]-'0');
                n=n%17;
            }
            // n=atoi(ch);      //atoi convert char data into integer number....
            // a=n%17;

            if(n==0)
            {
                b++;
                cout<<b<<endl;
            }
            else
            {
                cout<<b<<endl;
            }
            b=0;
        }
    }
}
