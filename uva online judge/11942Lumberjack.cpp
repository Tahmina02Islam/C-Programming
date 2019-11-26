#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    long long int t, a,as=0,des=0,b=0,c=99999,flag=0;
    while(cin>>t)
    {
        cout<<"Lumberjacks:"<<endl;
        for(i=0; i<t; i++)
        {
            for(j=0; j<10; j++)
            {
                cin>>a;
                if(a>b)
                {
                    b=a;
                    as++;
                    //cout<<"b "<<b<<endl;
                }
                else if(a<c)
                {
                    c=a;
                    des++;
                    //cout<<"c "<<c<<endl;
                }

            }
            if(as==10 || des==9)
            {
                cout<<"Ordered"<<endl;
            }
            else
            {
                cout<<"Unordered"<<endl;
            }
            flag=0;
            b=0;
            c=99999;
            as=0;
            des=0;

        }


    }
}
