#include"../inc/header.h"
int Addition()
{
	int i, n, num, sum=0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter %d numbers: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &num);
        sum = sum+num;
    }
    printf("\nSum of all %d numbers = %d\n", n, sum);
}

int Subtraction()
{
	int a,b, sub;
    printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	sub = a-b;
	printf("Subtraction is : %d\n", sub);
}

int Multiplication()
{
	int a,b, mul;
    printf("Enter teo numbers :");
	scanf("%d%d",&a,&b);
	mul = a*b;
	printf("Multification of %d and  %d  : %d\n", a, b, mul);
}

int Division()
{
	int a, b;
	float d; 
	printf("Enter two numbers :");
    scanf("%d", &a); 
    scanf("%d", &b);
    d=(float)a/(float)b;
    printf("Division of entered numbers :%.2f\n",d);
}
