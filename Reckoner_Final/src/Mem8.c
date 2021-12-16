#include"../inc/header.h"


int logBase()
{
    double a;
    printf("Enter a number: ");
    scanf("%lf", &a);
    if(a<=0.0)
    {
    printf("Math Error\n");
    }
    else
    {
    double result = log(a);
    printf("\nResult = %lf", result);
    }
}

int logBase10()
{
    double a;
    printf("Enter a number: ");
    scanf("%lf", &a);
    if(a<=0.0)
    {
    printf("Math Error\n");
    }
    else
    {
    double result = log10(a);
    printf("\nResult = %lf", result);
    }
    return 0;
}

int eToPowerX()
{
    double a;
    printf("Enter a number: ");
    scanf("%lf", &a);
    double result = exp(a);
    printf("\ne^%lf = %lf", a, result);
}

int squareRoot()
{
    int n;
    printf("\nEnter a number: ");
    scanf("%d",&n);
    if (n<0)
    {
    printf("Math Error\n");
    }
    else
    {
    double result = sqrt(n);
    printf("\nResult = %lf", result);
    }
}
