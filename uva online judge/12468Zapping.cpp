#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i,j,k,l,num,n=0,t,val,cal,a,b;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
       val=abs(b-a);
       if(a==-1 && b==-1)
        {
            break;
        }
        else if(val>=50)
        {
           cal=abs(val-100);
           cout<<cal<<endl;
        }
        else{
            cout<<val<<endl;
        }

        n=0;
    }
    return 0;
}
