#include<stdio.h>
int main()
{
    int i,j,k,a;
    printf("Enter number : ");
    scanf("%d",&a);
    for(i=1;i<a;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(j+" ");
        }
        printf("\n");
    }

}
