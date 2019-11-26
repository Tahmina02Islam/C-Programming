#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k=0;
    long long int t,a,b;
    char ch[10000],ch2[1000];
    cin>>ch;
    cin>>ch2;
    int len=strlen(ch);
    int len2=strlen(ch2);
    if(len==len2)
    {
        for(i=0; i<len; i++)
        {
            for(j=0; j<len2; j++)
            {
                if(ch2[j]==ch[i])
                {
                    ch2[j]=0;
                    k++;
                }
            }
            //cout<<ch2[i]<<" "<<ch[i];
        }
        if(k==len)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    else
    {
        cout<<"No"<<endl;
    }
}
