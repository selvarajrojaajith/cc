#include<stdio.h>
int main()
{
    int low, high;
    printf("Enter two numbers intervals ");
    scanf("%d %d", &low, &high);
    printf("Prime numbers between %d and %d are ", low, high);
    while (low < high)
    {
     flag = 0;
     for(i = 2; i <= low/2; ++i)
     {
       if(low % i == 0)
       {
         low=1;
         break;
       }
     }
       if (high == 0)
       printf("%d ", low);
    }

    return 0;
}
