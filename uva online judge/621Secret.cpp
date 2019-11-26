#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,k,l=1,p,u,count=0,num,cal;
    int len;
    char ar[2000];
    int a,b,c,d;
    int n;
    while(cin>>t)
    {
        for(i=0; i<t; i++)
        {
            cin>>ar;
            len=strlen(ar);
            if (strcmp(ar,"1")==0 || strcmp(ar,"4")==0 || strcmp(ar,"78")==0)
            {
                cout<<"+"<<endl;
            }
            //else
            //{
                //cout<<n;
              /*  while(n!=0)
                {
                    a=n/10;
                    b=n%10;
                    ar[l]=b;
                    n=a;
                    count++;
                    cout<<"ar ["<<l<<"] "<<ar[l]<<endl;
                    l++;
                }
                //cout<<"l "<<l<<", a "<<a<<" , b  "<<b<<", count  "<<count<<endl;
                */
               else if(ar[len-1]=='5' && ar[len-2]=='3')
                {
                    cout<<"-"<<endl;
                }
                else if(ar[0]=='1' && ar[1]=='9' && ar[2]=='0')
                {
                    cout<<"?"<<endl;
                }
                else if(ar[0]=='9' && ar[len-1]=='4')
                {
                    cout<<"*"<<endl;
                }
                else
                {
                    cout<<"+"<<endl;
                }
            }
        }
    return 0;
}
