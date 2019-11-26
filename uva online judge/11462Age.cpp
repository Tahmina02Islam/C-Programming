#include<bits/stdc++.h>
using namespace std;
#define max 2000005
//long long int ar[max],temp,a,b,t,n;    //globally declare korle input 20000000 nao jai, main func a naoa jai na.

int main()
{
    long long int ar[max],temp,a,b,t,n;
    int i,j,k;   //aikhanne value nile runtime error dai.
    while(cin>>t)
    {
        if(t==0)
        {
            break;
        }
        else
        {
            for(i=0; i<t; i++)
            {
                cin>>ar[i];
            }
            sort(ar,ar+t);

//                for(j=i+1;j<t;j++)
//                {
//                    if(ar[i]>ar[j])
//                    {
//                       // br[i]=ar[i];
//                        //count++;
//                       temp=ar[i];
//                        ar[i]=ar[j];
//                        ar[j]=temp;
//                        //cout<<ar[i]<<endl;
//                    }
//                }

            for(i=0;i<t;i++)
            {
                if(i==(t-1))
                {
                    cout<<ar[i];
                }
                else{
                    cout<<ar[i]<<" ";
                }
            }
            cout<<endl;

        }

    }
    return 0;
}
