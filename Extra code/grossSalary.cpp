/*
   DA=Dearness Allowance
   HRA=House Rent Allowance
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    double basic,hra,da,profit,salary,data;
    cout<<"Enter Basic Salary : ";
    cin>>basic;
    cout<<"Enter HRA  :  ";
    cin>>hra;
    cout<<"Enter D.A.  : ";
    cin>>da;

    profit=(basic*12)/100;
    salary=basic+hra+da+profit;

    cout<<"Basic  : "<<basic<<endl;
    cout<<"HRA    : "<<hra<<endl;
    cout<<"D.A.   : "<<da<<endl;
    cout<<"Profit : "<<profit<<endl;
    cout<<"***GROSS Salary  : "<<salary<<endl;
}
