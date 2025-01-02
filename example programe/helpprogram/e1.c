#include<stdio.h>
#include<math.h>

int fun(int a)
{
    if(a==1)
    {
        return 1;
    }
    else{
        int fact;
        printf("%d\n",a);
        fact =a*fun(a-1);
       
        return fact;
    }
}
int main()
{
    float x1,x;
    printf("enter the x");
    scanf("%f",&x);
    x1=x-((pow(x,3))/(fun(3)))+((pow(x,5))/(fun(5)))+((pow(x,7))/(fun(7)));
    printf("%f",x1);

}