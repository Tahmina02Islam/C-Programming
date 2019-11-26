#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,count=1,flag=0;
    long long int m,q,a,b,p=1,ar[100000],br[100000];
    while(cin>>m>>q)
    {
        if(m==0 && q==0)
        {
            break;
        }
        else
        {
            for(i=0; i<m; i++)
            {
                cin>>ar[i];
            }
            for(i=0; i<q; i++)
            {
                cin>>br[i];
            }
            sort(ar,ar+m);

            cout<<"CASE# "<<p<<":"<<endl;
            p++;

            for(i=0; i<q; i++)
            {
                for(j=0; j<m; j++)
                {
                    if(br[i]==ar[j])
                    {
                        cout<<br[i]<<" found at "<<j+1<<endl;
                        flag=1;
                        break;
                    }

                }
                if(flag==0)
                {
                    cout<<br[i]<<" not found"<<endl;

                }
            flag=0;

            }




//                cout<<"CASE# "<<p<<":"<<endl;
//                p++;
//                if(flag==1 && flag==0)
//                {
//
//
//                    if(flag==0)
//                    {
//                        cout<<br[i]<<" not found"<<endl;
//
//                    }
//                    else
//                    {
//                        cout<<br[i]<<" found at "<<j<<endl;
//
//                    }
//                }
//
//                else if(flag==1)
//                {
//                    cout<<br[i]<<" found at "<<j<<endl;
//                }
//
//                else if(flag==0)
//                {
//                    cout<<br[i]<<" not found"<<endl;
//                }
//                flag=0;
//                count=1;


        }
    }
}
