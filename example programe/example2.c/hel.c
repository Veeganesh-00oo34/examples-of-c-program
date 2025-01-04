#include<stdio.h>
int main()
{
    char *arr[50][50][50];
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter the name [%d][%d]",i,j);
            scanf("%19s",&arr[i][j]);
        }
    }
  
    for(i=0;i<3;i++)
    {
       
        for(j=0;j<3;j++)
        {
            printf("%s\t",arr[i][j]);
         
           
        }
        printf("\n");
    }
}
