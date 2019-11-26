#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    long long int t,n,p,a,b,c,d;
    while(cin>>t)
    {
       for(i=0;i<t;i++)
       {
           cin>>a>>b>>c>>d;

           if(a==b && b==c && c==d)        //square means 4 bahuee soman
           {
               cout<<"square"<<endl;
           }
           else if((a==c && b==d) || (a==b && c==d) || (a==d && b==c))     //rectangle means je kno 2 bahu soman
           {
            cout<<"rectangle"<<endl;
           }
           else if((a<(b+c+d)) && (b<(a+c+d)) && (c<(a+b+d)) && (d<(a+b+c)))              //quadrangle===maximum of these lengths must be less than the sum of other 3.
           {
               cout<<"quadrangle"<<endl;
           }
           else
           {
               cout<<"banana"<<endl;
           }

       }
    }
}
