#include<stdio.h>
int main()
{
    int arr[50],i,j,a,term,low;
    printf("number of given number");
    scanf("%d",&a);
    for(i=0;i<a;i++)
        {
            printf("enter %d",i);
            scanf("%d",&arr[i]);

        }

        term =arr[1];

for(i=0;i<a;i++)
{
    if(term>arr[i])
    {
        continue;
    }
    else
    {
        term=arr[i];
    }
}
printf("%d\n",term);
low=arr[1];
for(i=0;i<a;i++)
{
    if(low<arr[i])
    {
       continue;
    }
    else
    {
        low=arr[i];
    }
}
printf("%d\n",low);

}