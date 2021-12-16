#include"../inc/header.h"


void absolute()
{
    long long intResult = 0;
    int n;
    printf("\nEnter a number: ");
    scanf("%d",&n);
    intResult = abs(n);
    printf("\nabs(%d) = %lld", n, intResult);
}

void sineInverse()
{
    double n;
    double result = 0;
    printf("\nEnter a number: ");
    scanf("%lf",&n);
    if(n>1 || n<-1)  // Parameter not in Range
    {
        printf("Not in Range");
    }
    else
    {
        result = asin(n);
        printf("Inverse of sin(%.2f) = %.2lf in radians\n", n, result);

      // converting radians to degree
        result = asin(n)*180/PI;
        printf("Inverse of sin(%.2f) = %.2lf in degrees\n", n, result);
    }
}

// Function to compute the arc cosine(inverse cosine) of an argument
void cosineInverse()
{
    double n;
    double result = 0;
    printf("\nEnter a number: ");
    scanf("%lf",&n);
    if(n>1 || n<-1)  // Parameter not in Range
    {
        printf("\nNot in Range");
    }
    else
    {
        result = acos(n);
        printf("\nInverse of cos(%.2f) = %.2lf in radians\n", n, result);

      // converting radians to degree
        result = acos(n)*180/PI;
        printf("\nInverse of cos(%.2f) = %.2lf in degrees\n", n, result);
    }
}
