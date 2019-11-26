#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    string str[10000],temp;
    long long int a,b,c,count=0;
    while(cin>>a>>b)
    {
        for(i=0;i<a;i++)
        {
            cin>>str[i];
            count++;
           // cout<<str[i];
        }
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            {
                if(str[i]>str[j])
                {
                    temp=str[i];
                    str[i]=str[j];
                    str[j]=temp;
                    cout<<temp;
                }
            }
        }
        for(i=0;i<a;i++)
        {
            //cout<<str[i];
        }
        cout<<endl;

    }
}

