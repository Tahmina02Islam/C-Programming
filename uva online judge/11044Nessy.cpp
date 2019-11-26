#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,count=0;
    long long int r,c,t;
    while(cin>>t)
    {
        for(k=0; k<t; k++)
        {
            cin>>r;
            cin>>c;
            for(i=1; i<=r; i++)
            {
                for(j=1; j<=c; j++)
                {
                  if(i%3==0 && j%3==0)
                  {
                      count++;
                  }
                }
            }
           cout<<count<<endl;
            count=0;

    }
}
}
