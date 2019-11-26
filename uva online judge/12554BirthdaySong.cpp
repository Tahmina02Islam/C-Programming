#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,t,n;
    string str[1000];
    string ar[17]= {"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia",
                    "Happy", "birthday", "to", "you"
                   };
Loop:
    while(cin>>t)
    {
        for(i=0; i<t; i++)
        {
            cin>>str[i];
        }
        if(t<=16)
        {
            for(i=0; i<16;)
            {
                for(j=0; j<t; j++)
                {
                    cout<<str[j]<<": "<<ar[i]<<endl;
                    i++;
                    if(i==16)
                    {
                        goto Loop;
                    }
                }
            }
        }
        else
        {

        }

    }
    return 0;
}
