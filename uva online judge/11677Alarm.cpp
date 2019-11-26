#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    long long int sleep, h,m,h1,h2,m1,m2;
    while(cin>>h1>>m1>>h2>>m2)
    {
        if(h1==0 && m1==0 && h2==0 && m2==0)
        {
            break;
        }
        else{
        if(m2<m1)
        {
            m=(60+m2)-m1;
            h1=h1+1;
        }
        else{
            m=m2-m1;
            //h=h1;
        }
        if(h2<h1)
        {
            h=(h2+24)-h1;
        }
        else{
            h=h2-h1;
        }

        sleep=(h*60)+m;
        cout<<sleep<<endl;
        }
    }
}
