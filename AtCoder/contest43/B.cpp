#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k=0;
    char str;
    int ar[1000];
     cin>>str;
    int len,count=0;
    len=strlen(str);
for(i=0;i<len;i++){

       if(str=='0')
       {
           ar[k++]=0;
           cout<<k<<endl;
        }
       else if(str=='1')
       {
           ar[k++]=1;
           cout<<k<<endl;
       }
       else if(str=='B'){
        k--;
        cout<<k<<endl;
       }
}
    cout<<"enter"<<endl;
    cout<<"k "<<k<<endl;
    for(i=1;i<=k;i++)
    {
        cout<<ar[k];
    }
    cout<<endl;
    k=0;

    return 0;
}
