#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main()
{
    char ch[100];
    int count=0,ccount=0,symbol=0,digit=0;
    cout<<"Enter Any String : ";
    gets(ch);             //it can take input until EOF is found.

    for(int i=0; ch[i];i++)      //as like end of line..
    {

        if(ch[i]>='a' && ch[i]<='z' || ch[i]>='A' && ch[i]<='Z')
        {
            ccount++;
        }
       else if(ch[i]==' ')
        {
            count++;
        }
        else if(ch[i]>0)
        {
            digit++;
        }
        else
        {
            symbol++;
        }

    }
        cout<<"Character count: "<<ccount<<endl;
    cout<<"Total Space : "<<count<<endl;
    cout<<"Special Symbol : "<<symbol<<endl;
        cout<<"Digit : "<<digit<<endl;

}
