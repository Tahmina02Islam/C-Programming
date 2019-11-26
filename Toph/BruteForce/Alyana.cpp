#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k=0;
    long long int t,a,b,count=0;
    char ch[10000],ch2[1000];
    cin>>ch;
    int len=strlen(ch);
    for(i=0;i<len;i++)
    {
        if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u')
        {
            count++;
        }
        else if(ch[i]=='A' || ch[i]=='E' || ch[i]=='I' || ch[i]=='O' || ch[i]=='U'){
                count++;
                }
    }
    cout<<count<<endl;
}

