#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main()
{
    int i,j,k,t,val,flag;
    //char ch[50];
    string ch;
    // char str[11]={'one', 'two', 'three','four','five','six','seven','eight','nine','ten'};


    while(cin>>t)
    {
        for(i=0; i<t; i++)
        {
            //gets(ch);
            //int  len=strlen(ch);
            cin>>ch;
            int len=ch.length();
            //cout<<len<<endl;
            if(len==3)
            {
                if(ch[1]=='n' && ch[2]=='e'  || ch[0]=='o' &&  ch[1]=='n' || ch[0]=='o' &&  ch[2]=='e')
                {
                    cout<<"1"<<endl;

                }
                else if(ch[1]=='w' && ch[2]=='o'  || ch[0]=='t' &&  ch[1]=='w' || ch[0]=='t' &&  ch[2]=='o')
                {
                    cout<<"2"<<endl;
                }
                else if(ch[1]=='i' && ch[2]=='x'  || ch[0]=='s' &&  ch[1]=='i' || ch[0]=='s' &&  ch[2]=='x')
                {
                    cout<<"6"<<endl;
                }
                else if(ch[1]=='e' && ch[2]=='n'  || ch[0]=='t' &&  ch[1]=='e' || ch[0]=='t' &&  ch[2]=='n')
                {
                    cout<<"10"<<endl;
                }
            }
            else if(len==4)
            {
                if((ch[1]=='o' && ch[2]=='u' && ch[3]=='r')  || (ch[0]=='f' &&  ch[1]=='o' && ch[2]=='u')|| (ch[0]=='f' &&  ch[2]=='u' && ch[3]=='r')
                        || (ch[0]=='f' && ch[1]=='o' && ch[3]=='r'))
                {
                    cout<<"4"<<endl;

                }
                else if(ch[1]=='i' && ch[2]=='v' && ch[3]=='e'  || ch[0]=='f' &&  ch[1]=='i' && ch[2]=='v'|| ch[0]=='f' &&  ch[2]=='v' && ch[3]=='e'
                        || (ch[0]=='f' && ch[1]=='i' && ch[3]=='e'))
                {
                    cout<<"5"<<endl;

                }
                else if(ch[1]=='i' && ch[2]=='n' && ch[3]=='e'  || ch[0]=='n' &&  ch[1]=='i' && ch[2]=='n'|| ch[0]=='n' &&  ch[2]=='n' && ch[3]=='e'
                        || ch[0]=='n' && ch[1]=='i' && ch[3]=='e')
                {
                    cout<<"9"<<endl;

                }
            }

            else if(len==5)
            {
                if((ch[1]=='h' && ch[2]=='r' && ch[3]=='e' && ch[4]=='e' ) || (ch[0]=='t' && ch[1]=='h' && ch[2]=='r' && ch[3]=='e')
                        || (ch[0]=='t' && ch[2]=='r' && ch[3]=='e' && ch[4]=='e') || (ch[0]=='t' && ch[1]=='h' && ch[2]=='r' && ch[4]=='e')
                        || (ch[0]=='t' && ch[1]=='h' && ch[3]=='e' && ch[4]=='e')  )
                {
                    cout<<"3"<<endl;

                }
                else if((ch[1]=='e' && ch[2]=='v' && ch[3]=='e' && ch[4]=='n') || (ch[0]=='s' && ch[1]=='e' && ch[2]=='v' && ch[3]=='e')
                        || (ch[0]=='s' && ch[2]=='v' && ch[3]=='e' && ch[4]=='n') || (ch[0]=='s' && ch[1]=='e' && ch[2]=='v' && ch[4]=='n')
                        || (ch[0]=='s' && ch[1]=='e' && ch[3]=='e' && ch[4]=='n'))
                {
                    cout<<"7"<<endl;

                }

                else if((ch[1]=='i' && ch[2]=='g' && ch[3]=='h' && ch[4]=='t')|| (ch[0]=='e'&& ch[1]=='i' && ch[2]=='g' && ch[3]=='h')
                        || (ch[0]=='e' && ch[2]=='g' && ch[3]=='h' && ch[4]=='t')|| (ch[0]=='e' && ch[1]=='i' && ch[3]=='h' && ch[4]=='t')
                        || (ch[0]=='e' && ch[1]=='i' && ch[2]=='g' && ch[4]=='t'))
                {
                    cout<<"8"<<endl;

                }
            }

        }

    }
    return 0;
}
