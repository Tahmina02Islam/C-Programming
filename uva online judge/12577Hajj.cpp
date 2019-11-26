#include<bits/stdc++.h>
#include<stdio.h>
#include<cstring>
using namespace std;
int main()
{
    int i=1,j,val,t;
    char ch[10000];
    while(cin>>ch)
    {
        if(strcmp(ch,"*")==0)
        {
            break;
        }
        else
        {
            //cout<<ch;
            if(strcmp(ch,"Hajj")==0)
            {
                cout<<"Case "<<i<<": Hajj-e-Akbar"<<endl;
                i++;
            }
             else if(strcmp(ch,"Umrah")==0)
             {
                 cout<<"Case "<<i<<": Hajj-e-Asghar"<<endl;
                 i++;
             }
        }
    }
    return 0;
}
