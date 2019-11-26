#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k=0;
    long long int t,a,b;
    char ch[10000],ch2[1000];
    cin>>ch;
    int len=strlen(ch);
    for(i=len-1; i>=0; i--)
    {
        ch2[k]=ch[i];
        k++;
    }
     //cout<<ch<<" "<<ch2<<endl;
    if(strcmp(ch,ch2) == 0)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }


    //for()
}
