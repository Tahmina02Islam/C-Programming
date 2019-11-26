#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,val[100],ar[100],count=0,rem,cal=0,n,t,sum=0;
     int choice=0;
     cout<<"1. Open Notepad"<<endl;
     cout<<"2. Get Ip Address"<<endl;
     cout<<"3. Shut down the computer"<<endl;

     cout<<"Enter your Choice ";
     cin>>choice;
     switch(choice)
     {
     case 1:
        system("notepad");
        break;

      case 2:
        system("ipconfig");
        system("pause");
        break;

      case 3:
        system("SHUTDOWN -S");
        system("pause");
         break;
      default:
         cout<<"Invalid Choice\n";
     }
}


