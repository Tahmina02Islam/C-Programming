#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,len,num=0,ch=0,sp=0,space=0;
    char ar[100],str[100];
    cout<<"Enter String :  ";
    gets(str);
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            num++;
        }
        else if(str[i]==' ')
        {
            space++;
        }
        else if(str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z')
        {
            ch++;
        }
        else
        {
            sp++;
        }
    }

    cout<<"Number  : "<<num<<endl;
    cout<<"Space   : "<<space<<endl;
    cout<<"Alphabet: "<<ch<<endl;
    cout<<"Special : "<<sp<<endl;

}
