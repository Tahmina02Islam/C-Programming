#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,a;
    char ch='A',ar;
    printf("Enter character : ");
    scanf("%c",&ar);
    for(i=1;i<=(ar-'A'+1);i++)            //69-65+1=5......
    {
        for(j=1;j<=i;j++)
        {
            cout<<ch<<" ";
        }
        ch++;
        cout<<endl;

    }
    return 0;
}
