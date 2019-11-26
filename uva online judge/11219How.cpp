#include<bits/stdc++.h>
#include <cstdio>
using namespace std;
int main()
{
    int i,j=0,k,l;
    int d1,d2,m1,m,d,m2,t,y1,y2,y;
    while(cin>>t)
    {
        cout<<endl;
        for(i=0;i<t;i++)
        {
               scanf("%d/%d/%d",&d1,&m1,&y1);
               scanf("%d/%d/%d",&d2,&m2,&y2);
               cout<<endl;
               y=y1-y2;
               //cout<<y<<endl;
               if(y<=130)
               {
                   //cout<<y<<endl;
                   if(y==1 && d1<d2)
                   {
                       cout<<"Case #"<<i+1<<": 0"<<endl;
                   }
                   else if(y1==y2){
                        cout<<"Case #"<<i+1<<": Invalid birth date"<<endl;
                   }
                   else{
                    cout<<"Case #"<<i+1<<": "<<y<<endl;
                   }
               }
               else
                {
                    cout<<"Case #"<<i+1<<": Check birth date"<<endl;
                }
        }
    }
    return 0;
}
