#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,n2=1;
    int a,b,sum,c=1,i1,count=1,ar[1000];
    int t,n,p;
    while(cin>>t)
    {

        for(k=0; k<t; k++)
        {
            for(i=0; i<=9; i++)
            {
                ar[i]=0;
            }
            cin>>n;
            for(i=1; i<=n; i++)
            {
                for(j=0; j<=9; j++)
                {
                    if(i==j)
                    {
                        ar[i]=1;
                    }
                    else if(i>=10)
                    {
                        //cout<<"uppper valu "<<i<< " "<<endl;
                        p=i;

                        //cout<<"p"<<p;
                        for(l=0; a!=0; l++)
                        {
                        //cout<<"loop enter"<<endl;
                            a=p/10;
                            b=p%10;
                            p=b;
                            cout<<n2<<".a "<<a<<"b "<<b<<endl;
                            n2++;
                            for(i1=0; i1<=9; i1++)
                            {
                                if(i1==a)
                                {
                                    if(a==0)
                                    {
                                        ar[i1]=c;
                                        c++;
                                    }
                                    else
                                    {
                                        ar[i1]=count+1;
                                    }
//cout<<"ark ["<<k<<"] =" <<ar[k];
                                }

                            }
                            //cout<<"go to next"<<endl;
                            //cout<<endl;
                        }
                        //a=0;
                    }
                    //cout<<i<<endl;

                }
            }
            for(i=0; i<=9; i++)
            {
                cout<<ar[i]<<" ";
            }
            cout<<endl;
            c=1;
           count=1;
        }

    }
    return 0;
}
