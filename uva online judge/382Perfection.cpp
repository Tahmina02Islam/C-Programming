#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    long long int t,sum=0,n,a,b,c,d;
    cout<<"PERFECTION OUTPUT"<<endl;

    while(cin>>n)
    {
        if(n==0)
        {
            cout<<"END OF OUTPUT"<<endl;
            break;
        }
        else
        {
            for(j=1; j<=n/2; j++)
            {
                if(n%j==0)
                {
                    sum=sum+j;
                }
            }
            //cout<<sum<<endl;
            if(n<=9)
            {
                if(sum<n)
                {
                    cout<<"    "<<n<<" DEFICIENT"<<endl;
                }
                else if(sum==n)
                {
                    cout<<"    "<<n<<" PERFECT"<<endl;

                }
                else if(sum>n)
                {
                    cout<<"    "<<n<<" ABUNDANT"<<endl;
                }
            }
            else if(n>=10 && n<=99)
            {
                if(sum<n)
                {
                    cout<<"   "<<n<<" DEFICIENT"<<endl;
                }
                else if(sum==n)
                {
                    cout<<"   "<<n<<" PERFECT"<<endl;

                }
                else if(sum>n)
                {
                    cout<<"   "<<n<<" ABUNDANT"<<endl;
                }
            }
            else if(n>=100 && n<=999)
            {
                if(sum<n)
                {
                    cout<<"  "<<n<<" DEFICIENT"<<endl;
                }
                else if(sum==n)
                {
                    cout<<"  "<<n<<" PERFECT"<<endl;

                }
                else if(sum>n)
                {
                    cout<<"  "<<n<<" ABUNDANT"<<endl;
                }
            }
            else if(n>=1000 && n<=9999)
            {
                if(sum<n)
                {
                    cout<<" "<<n<<" DEFICIENT"<<endl;
                }
                else if(sum==n)
                {
                    cout<<" "<<n<<" PERFECT"<<endl;

                }
                else if(sum>n)
                {
                    cout<<" "<<n<<" ABUNDANT"<<endl;
                }
            }
            else if(n>=10000 && n<=60000)
            {
                if(sum<n)
                {
                    cout<<""<<n<<" DEFICIENT"<<endl;
                }
                else if(sum==n)
                {
                    cout<<""<<n<<" PERFECT"<<endl;

                }
                else if(sum>n)
                {
                    cout<<""<<n<<" ABUNDANT"<<endl;
                }
            }


            sum=0;

        }
    }
}
