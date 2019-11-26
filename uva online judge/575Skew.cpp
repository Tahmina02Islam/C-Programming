#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    char ch[500];
    long long int a,b,c,d,cal=0,p=1,n,sum=1,val,t;
    int i=1,j,k;
    while(true)
    {
        scanf("%s",&ch);
        n=strlen(ch);
        if(strcmp(ch,"0")==0)
        {
           break;
        }
        else
        {
            b=n;
                  //char convert into int number
                for(i=0;i<n;i++)
                {
                    c=(ch[i]-'0');
                   // cout<<c<<endl;
                    sum=pow(2,b);
                    b--;
                    cal=cal+c*(sum-1);
                   // cout<<sum<<" "<<cal<<endl;
                }
                  printf("%ld\n",cal);
        }
        cal=0;
    }
    return 0;
}
