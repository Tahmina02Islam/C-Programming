#include<bits/stdc++.h>
#include<stdio.h>
#include<cstring>
using namespace std;
int main()
{
    long long int t,l=0,sum=0;
    //char str[100]={'donate','report'};

    int i,j=0, k;
    char ch[100];
    cin>>t;

        for(i=0;i<t;i++)
        {

                cin>>ch;
                int len=strlen(ch);
                if(strcmp(ch,"donate")==0)
                {
                    cin>>l;
                    sum=sum+l;
                }

               else if(strcmp(ch,"report")==0)
                {
                    printf("%lld\n",sum);
                }

            }
    return 0;
}

