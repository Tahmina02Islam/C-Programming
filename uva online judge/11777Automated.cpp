#include<bits/stdc++.h>
using namespace std;
long long int t,n,t1,t2,atn,fn,ct1,ct2,ct3,sum;

int main()
{
    int i,j,k,l,flag=0,count=0;
    double avg, cal;
    while(cin>>t)
    {
        for(i=0; i<t; i++)
        {
            cin>>t1>>t2>>fn>>atn>>ct1>>ct2>>ct3;

            if(ct1>=ct3 && ct2>=ct3)
            {
                avg=(ct1+ct2)/2;
                flag=1;
            }
            else if(ct2>=ct1 && ct3>=ct1)
            {
                avg=(ct2+ct3)/2;
                flag=1;
            }
            else if(ct1>=ct2 && ct3>=ct2)
                {
                    avg=(ct1+ct3)/2;
                    flag=1;
                }
            if(flag==1)
            {
                sum=t1+t2+fn+atn+avg;
                count++;
                if(sum>=90)
                {
                    cout<<"Case "<<count<<": A"<<endl;
                    //cout<<sum<<endl;
                }
                else if(sum>=80 && sum<90)
                {
                    cout<<"Case "<<count<<": B"<<endl;
                    //cout<<sum<<endl;
                }
                else if(sum>=70 && sum<80)
                {
                    cout<<"Case "<<count<<": C"<<endl;
                }
                else if(sum>=60 && sum<70)
                {
                    cout<<"Case "<<count<<": D"<<endl;
                }
                else if(sum<60)
                {
                    cout<<"Case "<<count<<": F"<<endl;
                }
            }

        }
        count=0;
    }
    return 0;
}
