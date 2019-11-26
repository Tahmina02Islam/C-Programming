#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    string str;
          cin>>str;

            for(i=0;i<str.size();i++)
            {
                if(i==0)
                {
                    cout<<"2";
                }
                else if(i==1)
                {
                   cout<<"0";
                }
                else if(i==2)
                {
                    cout<<"1";
                }
                else if(i==3)
                {
                    cout<<"8";
                }
                else{
                    cout<<str[i];
                }
            }
            cout<<endl;

}
