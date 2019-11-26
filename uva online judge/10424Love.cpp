#include<bits/stdc++.h>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j,k,l,v,sum;
    double rat,val;
    long long int a,b,c,p,q,cal1,cal2;
    char ch[1000],ch2[1000];
    while(gets(ch))
    {
        gets(ch2);
        cal1=0;
        cal2=0;
        p=0;
        q=0;
        /////////   Small Alphabet Start  ///////

        for(i=0; i<strlen(ch); i++)
        {
            if(ch[i]>='a' && ch[i]<='z')
            {
                cal1=cal1+ch[i]-96;
            }
            else if(ch[i]>='A' && ch[i]<='Z')
            {
                cal1=cal1+ch[i]-64;
            }
        }

        while(cal1!=0)
        {
            a=cal1/10;
            b=cal1%10;
            p=p+b;
            cal1=a;
        }
        if(p>9)
        {
            cal1=p;
            p=0;
            while(cal1!=0)
            {
                a=cal1/10;
                b=cal1%10;
                p=p+b;
                cal1=a;
            }
        }
        ////////////// small alphabet END  ////////



        /////////////  Large Alphabet Start  ///////

        for(i=0; i<strlen(ch2); i++)
        {
            if(ch2[i]>='a' && ch2[i]<='z')
            {
                cal2=cal2+ch2[i]-96;
            }
            else if(ch2[i]>='A' && ch2[i]<='Z')
            {
                cal2=cal2+ch2[i]-64;
            }
        }
        while(cal2!=0)
        {
            a=cal2/10;
            b=cal2%10;
            q=q+b;
            cal2=a;
        }
        if(q>9)
        {
            cal2=q;
            q=0;
            while(cal2!=0)
            {
                a=cal2/10;
                b=cal2%10;
                q=q+b;
                cal2=a;
            }
        }
        if(p>q)               //   small/large....
        {
            rat=(double)q/(double)p;
            val=rat*100;
        }
        else
        {
            rat=(double)p/(double)q;
            val=rat*100;
        }
        printf("%.2lf %%\n",val);
        ////////////   Large Alphabet END   /////////
    }
}
