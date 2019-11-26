#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    long long int b,s,a,c=1;
    while(cin>>b>>s)
    {
        if(b==0 && s==0)
        {
            break;
        }
        else
        {
         if(b<=1)
            {
                cout<<"Case "<<c<<": :-\\"<<endl;
                c++;
            }
            else if(s==b || b<s)
            {
                cout<<"Case "<<c<<": :-|"<<endl;
                c++;
            }
            else if(b>s)
            {
                cout<<"Case "<<c<<": :-("<<endl;
                c++;
            }

            else
            {
                cout<<"Case "<<c<<": :-)"<<endl;
                c++;
            }

        }

    }
}
