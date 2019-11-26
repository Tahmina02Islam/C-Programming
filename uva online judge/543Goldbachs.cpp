#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    long long int l,a,b,c,d,e,f,v,q,p,max,flag,n,t;
    while(cin>>n)
    {
        max=0;
        flag=0;
        if(n==0)
        {
            break;
        }
        else
        {
            for(i=2; i<=n/2; i++)
            {
                for(j=i+1; j<n; j++)
                {
                    if(i%j==0)
                    {
                        break;
                    }
                    else
                    {
                        if((i%2!=0 && j%2!=0) && (i%3!=0 && j%3!=0) )//|| (i%5!=0 && j%5!=0) || (i%7!=0 && j%7!=0) || (i%9!=0 && j%9!=0))
                        {
                            a=i+j;
                            b=abs(i-j);
                            if(b>max && a==n)
                            {
                                max=b;
                                p=i;
                                q=j;
                                flag=1;
                            }

//                            if(a==n)
//                            {
//                                cout<<n<<" = "<<i<<" + "<<j<<endl;
//                                break;
//                            }

                        }
                    }
                }
            }
            if(flag==1)
            {
                cout<<n<<" = "<<p<<" + "<<q<<endl;
            }
        }
    }
}
