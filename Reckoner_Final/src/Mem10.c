#include"../inc/header.h"


// Function to compute the arc tangent(inverse tangent) of an argument
void tangentInverse()
{
    double n;
    double result = 0;
    printf("\nEnter a number: ");
    scanf("%lf",&n);
    result = atan(n);

    printf("\nInverse of tan(%.2f) = %.2f in radians", n, result);

    // Converting radians to degrees
    result = (result * 180) / PI;
    printf("\nInverse of tan(%.2f) = %.2f in degrees", n, result);
}

void npr()
{
    long long intResult = 0;
    long long n, r;
    printf("\nEnter two numbers: ");
    scanf("%lld%lld", &n, &r);
    if(n>=r && n>0 && r>=0)
    {
    intResult = factorialReturn(n) / factorialReturn(n - r);
    printf("\nResult = %lld", intResult);
    }
    else
    {
    printf("Math Error\n");
    }
}
// Function to calculate Combinations (nCr)
void ncr()
{
    long long intResult = 0;
    long long n, r;
    printf("\nEnter two numbers: ");
    scanf("%lld %lld", &n, &r);
    if(n>=r && n>0 && r>=0)
    {
    intResult = factorialReturn(n) / (factorialReturn(r) * factorialReturn(n - r));
    printf("\nResult = %lld", intResult);
    }
    else
    {
    printf("Math Error\n");
    }
}

