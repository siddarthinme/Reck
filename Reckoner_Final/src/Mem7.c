#include"../inc/header.h"

int sine()
{
    double a;
    printf("Enter angle in radians: ");
    scanf("%lf", &a);
    double result = sin(a);
    printf("\nsin(%lf) = %lf", a, result);
}

int cosine()
{
    double a;
    printf("Enter angle in radians: ");
    scanf("%lf", &a);
    double result = cos(a);
    printf("\ncos(%lf) = %lf", a, result);
}

int tangent()
{
    double a;
    printf("Enter angle in radians: ");
    scanf("%lf", &a);
    double result = tan(a);
    printf("\ntan(%lf) = %lf", a, result);
}
