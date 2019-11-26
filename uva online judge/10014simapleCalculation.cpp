//elapsed=otikranto somoy
//stationary=sthir, nischol
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    double p1,p2,cal,c,sum=0,val=0;
    long long int t,n;
    while(cin>>t){

    for(i=0; i<t; i++)
    {
        cout<<endl;
        cin>>n;
        cin>>p1;
        cin>>p2;
        sum=p1+p2;
        sum=sum/2;
        cin>>c;
        /*for(j=0; j<n; j++)
        {
                       //n==1 ar jonno c holo 1ta, noile onno ta te c ar value barbe....
            val=val+c;
            //sum=sum+p;
        }*/
        cal=sum-val;
        //cout<<cal<<endl;
        printf("%.2f\n",cal);


    }
    val=0;
    sum=0;
    }
    return 0;

}
