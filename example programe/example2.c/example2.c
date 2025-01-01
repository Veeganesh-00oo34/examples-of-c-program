#include<stdio.h>
int main()
{
    int i=0,j=0,l=1,m=1,arr[50][50],a,b;
    printf("enter the number of table");
    scanf("%d",&a);
    printf("enter the number of quantity to be multiply");
    scanf("%d",&b);
   while(i<a){
        j=0;
        l=1;
        while(j<b){
            arr[i][j]=l*m;
            printf("%d\t",arr[i][j]);
            j++;
            l++;


        };
        printf("\n");
        m++;
        i++;
    };

}