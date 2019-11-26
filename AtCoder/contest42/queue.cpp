#include<iostream>
#include<queue>
using namespace std;
int main()
{
    int i,a,len,b,c,n;
    cin>>n;
    queue<int>qu;
    for(i=0;i<n;i++)
    {
        if(i%3==0 || i%3==1)
        {
         cin>>a;
         qu.push(a);
        }
        else if(i%3==2)
        {
            c=qu.empty();
            if(c!=1)
            {

            b=qu.front();

            cout<<b<<endl;
            qu.pop();
            }
        }

    }
    return 0;

}
