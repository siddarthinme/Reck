#include"../inc/header.h"

int Modulus()
{
	int num1,num2,rem;
	printf("Enter two numbers:");
	scanf("%d %d",&num1,&num2);
	rem=num1%num2;
	printf("Remainder is : %d",rem);
}

int Power()
{
	double base, expo;
    double result = 0;
    printf("Enter a base number: ");
    scanf("%lf", &base);
    printf("Enter an exponent: ");
    scanf("%lf", &expo);
    result = pow(base, expo);
    printf("%.1lf^%.1lf = %.2lf", base, expo, result);
}

int factorial()
{
    long long intResult = 0;
    long long n, f, i;
    printf("\nEnter a number: ");
    scanf("%lld", &n);
    f = 1;
    for(i = 1; i<=n; i++)
    {
        f = f * i;
    }
    intResult = f;
    printf("\nFactorial of %lld = %lld", n, intResult);

}
long long factorialReturn(long long n)
{
    long long f, i;
    f = 1;
    for(i = 1; i<=n; i++)
    {
        f = f * i;
    }
    return f;
}
