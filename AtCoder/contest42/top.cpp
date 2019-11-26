#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int n,a,b,i;
    stack<int>st;
    cin>>n;
    for(i=1;i<n;i++)
    {
        if(i%3==0 || i%3==1)
        {
            cin>>a;
            st.push(a);
        }
        else if(i%3==2)
        {
            if(st.empty()!=1)
            {
                b=st.top();
                cout<<b<<endl;
                st.pop();
            }
        }
    }
    return 0;
}
