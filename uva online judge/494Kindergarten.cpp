#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[1000];
    int count=0;
    int i=0,t;

    //scanf("%[^\n]s",&ch);
    while(gets(ch))
    {
        int len=strlen(ch);
        //cout<<len<<endl;
        for(i=0;i<len;i++)
        {
             if(ch[i]>='a' && ch[i]<='z' || ch[i]>='A' && ch[i]<='Z')
            {
            count++;
            cout<<ch[i]<<" "<<count<<endl;
            //if(ch[i]==' ')
            //{
            //    cout<<ch[i]<<endl;
           //     count++;
           // }

            }

        }


            //i++;

        cout<<count<<endl;
            }
    return 0;
}
