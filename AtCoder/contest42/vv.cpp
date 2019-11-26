#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int a,i,len;
    vector<int>  vc;
    for(i=0;i<10;i++)
    {
        cin>>a;
        vc.push_back(a);
    }
    for(i=0;i<10;i++)
    {
        cout<<vc[i]<<" ";
    }
    len=vc.size();
    cout<<len;
    return 0;

}
