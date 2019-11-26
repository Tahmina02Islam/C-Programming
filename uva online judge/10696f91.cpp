//McCarthy define a recursive function f91.....
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    long long int k,n,t;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        else if(n<=100)
        {

            cout<<"f91("<<n<<") = 91"<<endl;
        }
        else if(n>=101)
        {
            k=n-10;
            cout<<"f91("<<n<<") = "<<k<<endl;
        }

    }
}
