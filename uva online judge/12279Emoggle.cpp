#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,t,p=0,v=0,cal,n=1;
    int ar[1001];
    while(cin>>t)
    {
        if(t==0)
        {
            break;
        }
        else
        {
            for(j=0; j<t; j++)
            {
                cin>>ar[j];
                if(ar[j]==0)
                {
                    p++;
                }
                else
                {
                    v++;
                }
            }
            cal=v-p;
            cout<<"Case "<<n<<": "<<cal<<endl;
            n++;
            v=0;
            p=0;
        }

    }
}
