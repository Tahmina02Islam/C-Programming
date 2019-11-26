#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,count=0,x,y,z;
    char ch[100],ar[100],word;
    //char *ch=malloc(sizeof(50));

    /*for(i=0;ch[i]='\0';i++)
    {
        //cin>>ch[i];
        //scanf ("%[^\n]", ch);
        gets(ch);
             }*/

    gets(ch);
    // while(strcmp(ch,"exit")!=0)
    cout<<"Enter word :  ";
    cin>>word;

    int len=strlen(ch);
    for(i=0; i<len; i++)
    {
        if(word==ch[i])
        {
            count++;
            //cout<<ch[i]<<" ";
        }

    }

    printf("%c count as %d\n",word,count);

    /*for(i=0;i<26;i++)
    {
        printf("%c count as %d\n",i,ar[i]);
    }*/

}
