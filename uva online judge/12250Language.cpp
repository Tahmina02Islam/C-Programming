#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k=1,v,t;
    char ch[2003];
    while(cin>>ch)
    {
        if(strcmp(ch,"#")==0)
        {
            break;
        }
        else
        {
            if(strcmp(ch,"HELLO")==0)
            {
                cout<<"Case "<<k<<": ENGLISH"<<endl;
                k++;
            }
            else if(strcmp(ch,"HOLA")==0)
            {
                cout<<"Case "<<k<<": SPANISH"<<endl;
                k++;
            }
            else if(strcmp(ch,"HALLO")==0)
            {
                cout<<"Case "<<k<<": GERMAN"<<endl;
                k++;
            }
            else if(strcmp(ch,"BONJOUR")==0)
            {
                cout<<"Case "<<k<<": FRENCH"<<endl;
                k++;
            }
            else if(strcmp(ch,"CIAO")==0)
            {
                cout<<"Case "<<k<<": ITALIAN"<<endl;
                k++;
            }
            else if(strcmp(ch,"ZDRAVSTVUJTE")==0)
            {
                cout<<"Case "<<k<<": RUSSIAN"<<endl;
                k++;
            }
            else
            {
                cout<<"Case "<<k<<": UNKNOWN"<<endl;
                k++;
            }
        }
    }
}
