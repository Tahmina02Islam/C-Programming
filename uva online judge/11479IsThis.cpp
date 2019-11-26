#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    long long int t,a,b,c,p,q,r,sum,cal,count=1;
    while(cin>>t)
    {
        for(i=0; i<t; i++)
        {
            cin>>a>>b>>c;
            p=a+b;
            q=a+c;
            r=b+c;
           if(p>c && q>b && r>a)     //valid
            {
                if((a==b) && (b==c) && (c==a))
                {
                    cout<<"Case "<<i+1<<": Equilateral"<<endl;
                }
                else if((a==b) || (b==c) || (c==a))
                {
                    //cout<<"a "<<a<<"b "<<b<<"c "<<c<<endl;
                    cout<<"Case "<<i+1<<": Isosceles"<<endl;
                }

                else if(p>c && q>b && r>a)
                {
                    cout<<"Case "<<i+1<<": Scalene"<<endl;
                }
            }
                else //if(p<c && q<b && r<a)
            {
                cout<<"Case "<<i+1<<": Invalid"<<endl;
            }
        }
        p=0;
        q=0;
        r=0;
    }

}
