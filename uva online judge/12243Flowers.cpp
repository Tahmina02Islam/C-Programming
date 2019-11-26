#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    long long int len,a,count=0,flag=0,b,c;
    char ch[100000],ch2[10000],ch3;
    while(true)
    {
        gets(ch);
        count=0;
        len=strlen(ch);
        ch3=ch[0];
        flag=0;
        for(i=0; ch[i]!='\n'; i++)
        {
           if(ch[i]==' ')
           {
              count++;
              if(ch3==ch[i+1] || ch3==ch[i+1]+'32')
              {
                  ch3=ch[i+1];
                  flag=1;
                  cout<<ch3<<endl;
              }

           }

        }
        if(flag==1)
        {
            cout<<"Y"<<endl;
        }
        else{
            cout<<"N"<<endl;
        }
        for(i=0;i<count;i++)
        {
            //cout<<ch2[i];
        }
        //cout<<count<<endl;
    }
}
