#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    char ch[1000];
    long long int n,a,count=0,b,c=0,d;
    while(scanf("%s",&ch)!=EOF)
    {
        a=strlen(ch);
        b=a-1;
        for(i=0; i<a; i++)
        {
            if(ch[i]==ch[b])
            {
                count++;
            }
            b--;
        }
        b=a-1;

        for(i=0; i<a; i++)
        {
            if((ch[i]=='A' && ch[b]=='A') || (ch[i]=='E' && ch[b]=='3') || (ch[i]=='H' && ch[b]=='H') || (ch[i]=='I' && ch[b]=='I')
                    ||  (ch[i]=='J' && ch[b]=='L') || (ch[i]=='L' && ch[b]=='J') || (ch[i]=='M' && ch[b]=='M')||(ch[i]=='O' && ch[b]=='O')
                    || (ch[i]=='S' && ch[b]=='2') || (ch[i]=='T' && ch[b]=='T')||(ch[i]=='U' && ch[b]=='U')|| (ch[i]=='V' && ch[b]=='V')
                    || (ch[i]=='W' && ch[b]=='W') || (ch[i]=='X' && ch[b]=='X') || (ch[i]=='Y' && ch[b]=='Y')||(ch[i]=='Z' && ch[b]=='5')
                    || (ch[i]=='1' && ch[b]=='1') || (ch[i]=='2' && ch[b]=='S') || (ch[i]=='3' && ch[b]=='E') || (ch[i]=='5' && ch[b]=='Z')
                    || (ch[i]=='8' && ch[b]=='8') )
            {
                c++;
            }
            b--;
        }


        //cout<<a<<" "<<count<<endl;
        if(count==a && a!=c)
        {
            printf("%s -- is a regular palindrome.\n\n",ch);
        }
        else if(a!=count && a!=c)
        {
            printf("%s -- is not a palindrome.\n\n",ch);
        }
        else if(a!=count && a==c)
        {
            printf("%s -- is a mirrored string.\n\n",ch);
        }
        else if(a==count && a==c)
        {
            printf("%s -- is a mirrored palindrome.\n\n",ch);
        }
        count=0;
        c=0;

    }
}
