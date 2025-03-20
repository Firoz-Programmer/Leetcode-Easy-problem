#include<stdio.h>
int main()
{
    int firoz1,firoz2,firoz3;

    printf("Enter one Number:");
    scanf("%d",&firoz1);

    printf("Enter two Number:");
    scanf("%d",&firoz2);

    printf("Enter three Number:");
    scanf("%d",&firoz3);

    if(firoz1>firoz2 && firoz1>firoz3)
    {
        printf("%d is largest.", firoz1);
    }
    else if(firoz2>firoz3 && firoz2>firoz3)
    {
        printf("%d is largest.", firoz2);

    }
    else
    {
        printf("%d is largest.", firoz3);
    }
    return 0;
}




