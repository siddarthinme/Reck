#include"../inc/header.h"


void binoct()
{
    long int binarynum, octalnum = 0, j = 1, remainder;
 
    printf("Enter the value for  binary number: ");
    scanf("%ld", &binarynum);
    while (binarynum != 0)
    {
        remainder = binarynum % 10;
        octalnum = octalnum + remainder * j;
        j = j * 2;
        binarynum = binarynum / 10;
    }
    printf("Equivalent octal value: %lo", octalnum);
}

void decbin()
{
    long int decimalNumber,remainder,quotient;
    int binaryNumber[100],i=1,j;
    printf("Enter any decimal number: ");
    scanf("%ld",&decimalNumber);
    quotient = decimalNumber;
    while(quotient!=0){
         binaryNumber[i++]= quotient % 2;
         quotient = quotient / 2;
    }
    printf("Equivalent binary value of decimal number %ld: ",decimalNumber);
    for(j = i -1 ;j> 0;j--)
         printf("%d",binaryNumber[j]);
}

void dechex()
{
    long decimalnum, quotient, remainder;
    int i, j = 0;
    char hexadecimalnum[100];
 
    printf("Enter decimal number: ");
    scanf("%ld", &decimalnum);
 
    quotient = decimalnum;
 
    while (quotient != 0)
    {
        remainder = quotient % 16;
        if (remainder < 10)
            hexadecimalnum[j++] = 48 + remainder;
        else
            hexadecimalnum[j++] = 55 + remainder;
        quotient = quotient / 16;
    }
 
    // display integer into character
    printf("Hexadecimal is :");
    for (i = j; i >= 0; i--)
    {
            printf("%c", hexadecimalnum[i]);
    }
    printf("\n");
}
