#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    long count=0;
    char ch;

    while(scanf("%c",&ch)!=EOF)
    {
           if(ch=='"')
            {
            count++;
            if(count%2==1)
            {
                printf("``");
            }
            else
            {
                printf("''");
            }
            }
        else
        {
            printf("%c",ch);
        }
    }
    return 0;
}
