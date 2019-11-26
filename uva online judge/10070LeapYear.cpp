#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
   long long  int a,b;
    int flag=0;
    long long int c=0;
    string str;
    while(cin>>str)
    {
        if(c>0)
        {
            cout<<endl;
        }
        c++;

            if((a%4==0 && a%100!=0 )|| (a%400==0))
            {
                cout<<"This is leap year."<<endl;
                flag=1;
            }

            if(a%15==0)
            {
                cout<<"This is huluculu festival year."<<endl;
                flag=1;
            }

            if(a%55==0)
            {
                cout<<"This is bulukulu festival year."<<endl;
                flag=1;
            }
            if(flag==0)
            {
                cout<<"This is an ordinary year."<<endl;

            }


        flag=0;

    }
    //cout<<endl;

    return 0;
}
