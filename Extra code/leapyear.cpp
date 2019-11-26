#include<bits/stdc++.h>
using namespace std;
int check;
int leap_year(int data)
{
    if(data%400==0 || (data%4==0 && data%100!=0))
    {
        check=1;
    }
    else
    {
        check=0;
    }
    return data;
}
int main()
{
    int i,j,k,val;
    cout<<"Enter the value :";
    while(cin>>val)
    {
        leap_year(val);
        if(check==1)
        {
            cout<<val<<" is the leap year."<<endl;
        }
        else
        {
            cout<<val <<" isn't the leap year."<<endl;
        }
        main();
    }
    return 0;
}
