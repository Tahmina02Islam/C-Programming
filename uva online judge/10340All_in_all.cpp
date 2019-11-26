#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[100000],ch2[100000];
    int i,j,k,count=0;
    long long int a,b,c,p,d;

    while(scanf("%s %s",&ch,&ch2)!=EOF)
    {
        a=strlen(ch);
        b=strlen(ch2);
        p=0;
        for(i=0; i<a; i++)
        {
            for(j=p; j<b; j++)
            {
                if(ch[i]==ch2[j])
                {
                    //st[count]=ch2[j];
                    //cout<<st[count];
                    count++;
                    p=j+1;
                    break;
                }

            }
        }
        //cout<<count<<a<<endl;
        //printf("%s + %s\n",ch,st);
        if(count==a)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
        count=0;
        // gets(ch)
        // gets(ch2);
        //cout<<ch<<" 2 nd "<<ch2<<endl;
    }
}
