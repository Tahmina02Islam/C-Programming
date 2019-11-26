#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,n,sp;
    while(cin>>n)
    {
        sp=n-1;
        for(i=0;i<n;i++)
        {
          for(j=0;j<sp;j++)
          {
              cout<<" ";
          }
          for(k=0;k<=i;k++)
          {
              cout<<"* ";
          }
          cout<<endl;
          sp--;
        }
    }

}
