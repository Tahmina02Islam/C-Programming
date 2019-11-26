/*Armstrong number means cube multication which can find the same output as the finding of input.
Example: base 3: 153=(1*1*1)+(5*5*5)+(3*3*3)
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,data,sum=0,rem,ar,val;
    cout<<"Enter the value ";
    while(cin>>val)
    {
        data=val;
        //cout<<"Data "<<data;
        for(i=0; data!=0; i++)
        {
            rem=data%10;
           // cout<<"Rem  "<<rem<<" ";
            sum=sum+(rem*rem*rem);
            //cout<<" Sum "<<sum<< "   ";
            ar=data/10;
            //cout<<"Ar "<<ar<<" ";
            data=ar;
        }
        //cout<<"val "<<val;
        if(sum==val)
        {
            cout<<val<<" is the armstrong number."<<endl;
        }
        else
        {
            cout<<val<<" is n't armstrong number" <<endl;
        }
        main();
    }
    return 0;
}
