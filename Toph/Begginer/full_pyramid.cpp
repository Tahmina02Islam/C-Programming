#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    long long int t,a,b,n,c;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=1;j<n-i;j++)
        {
            cout<<" ";
        }
        for(j=0;j<=i;j++)
        {
                if(j==i)
                {
                     printf("*");
                }
                else{
                    printf("* ");
                }
        }
        cout<<endl;
    }
}

