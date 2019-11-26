#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j, k=1,v,t;
    int l,w,h;
    while(cin>>t)
    {
        for(i=0;i<t;i++)
        {
            cin>>l>>w>>h;
            if(l<=20 && w<=20 && h<=20)
            {
                cout<<"Case "<<k<<": good"<<endl;
                k++;
            }
            else
            {
                cout<<"Case "<<k<<": bad"<<endl;
                k++;
            }
        }
    }
}
