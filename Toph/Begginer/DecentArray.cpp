//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int i,j;
//    long long int t,a,ar[1000],b,p,q,x,y,flag=0,z,d,n,c,sum=0;
//    cin>>t;
//    for(i=0; i<t; i++)
//    {
//        cin>>ar[i];
//    }
//    for(i=0; i<t; i++)
//    {
//        if(i==t-1)
//        {
//            break;
//        }
//        else if(ar[i+1]>=ar[i])
//        {
//            flag=1;
//            //cout<<ar[i+1]<<" "<<ar[i]<<endl;
//        }
//        else
//        {
//            flag=0;
//            break;
//        }
//        //cout<<"flag"<<flag<<endl;
//    }
//
//    if(flag==1)
//    {
//        cout<<"Yes"<<endl;
//    }
//    else
//    {
//        cout<<"No"<<endl;
//    }
//
//}
//
//


#include<stdio.h>
int main()
{
    int n=1000,i;
    if(0<=n<=100){

    scanf("%d",&n);
    int a[n];
    for(i=1;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=1;i<=n;i++)
    {
        if(a[i]<=a[i+1])
        {
            printf("Yes");
            break;
        }
        else{
            printf("No");
            break;
        }
    }


    }

    return 0;
}
