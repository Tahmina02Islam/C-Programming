#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j,k;
    long long int a,b,c,d,t,n,ar[1000],cont=1,MAX;
    string str,str2[1000];

    while(cin>>t)
    {
        for(i=0; i<t; i++)
        {
            for(j=0; j<10; j++)
            {
                //scanf("%s%lld",&str,&ar[j]);
                cin>>str>>ar[j];
                str2[j]=str;
            }

            MAX=ar[0];
            for(j=1; j<10; j++)
            {
                if(ar[j]>MAX)
                {
                    MAX=ar[j];
                }

            }
            //cout<<max<<endl;
            cout<<"Case #"<<cont<<":"<<endl;
            for(j=0;j<10;j++)
            {
                if(ar[j]==MAX)
                {
                    cout<<str2[j]<<endl;
                }
            }
            cont++;
        }
        cont=1;
    }
    return 0;
}
