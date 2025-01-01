#include<stdio.h>
int main()
{
    int i=0,j=0,l=1,m=1,arr[50][50],a,b;
    printf("enter the number of table");
    scanf("%d",&a);
    printf("enter the number of quantity to be multiply");
    scanf("%d",&b);
    do{
        j=0;
        l=1;
        do{
            arr[i][j]=l*m;
            printf("%d\t",arr[i][j]);
            j++;
            l++;


        }while(j<b);
        printf("\n");
        m++;
        i++;
    }while(i<a);

}