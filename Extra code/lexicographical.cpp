#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,t;
    string ar[100],br[100],cr[100];
    string str[100],temp;

    cout<<"Enter number of Input:  ";
    while(scanf("%d",&t)!=EOF)
    {
        for(i=0; i<t; i++)
        {
            cin>>ar[i];
            //getline(cin,ar[i]);    //only string ar jonno use hbe...
        }

        for(i=0; i<t; i++)
        {
            for(j=i+1; j<=t; j++)
            {
                if(ar[i]<ar[j])
                {
                    temp=ar[i];
                    ar[i]=ar[j];
                    ar[j]=ar[i];
                }
            }
        }
        cout<<"In lexicographical order: "<<endl;

        for(i=0; i<t; i++)
        {
            cout<<ar[i]<<endl;
        }

    }
}

