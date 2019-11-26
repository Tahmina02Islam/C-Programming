#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, j,k;
    long long int a=1,ar[100000],b=2,c,flag=0,t,d;
    while(cin>>t)
    {
        for(i=0;i<t;i++)
        {
            for(j=0;j<5;j++)
            {
                cin>>ar[j];
            }
              if(ar[0]==1 && ar[1]==2 && ar[2]==3 && ar[3]==4 && ar[4]==5)
                {
                   flag=1;
                }
                else if(ar[0]==2 && ar[1]==3 && ar[2]==4 && ar[3]==5 && ar[4]==6)
                {
                    flag=1;
                }
                else{
                    flag==0;
                }

            if(flag==1)
            {
                cout<<"Y"<<endl;
            }
            else{
                cout<<"N"<<endl;
            }
            flag=0;
        }
    }
}
