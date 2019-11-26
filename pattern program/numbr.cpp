#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,a;
    printf("Enter number : ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<i+1;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
