#include"../inc/header.h"

void bindec()
{
    long int binaryNumber,decimalNumber=0,j=1,remainder;
    printf("\nEnter any binary number: ");
    scanf("%ld",&binaryNumber);
    while(binaryNumber!=0){
         remainder=binaryNumber%10;
        decimalNumber=decimalNumber+remainder*j;
        j=j*2;
        binaryNumber=binaryNumber/10;
    }
    printf("Equivalent decimal value: %ld \n",decimalNumber);
}

void addbin()
{
    long int binary1,binary2;
    int i=0,remainder = 0,sum[20];
    printf("Enter any first binary number: ");
    scanf("%ld",&binary1);
    printf("Enter any second binary number: ");
    scanf("%ld",&binary2);
    while(binary1!=0||binary2!=0){
         sum[i++] =  (binary1 %10 + binary2 %10 + remainder ) % 2;
         remainder = (binary1 %10 + binary2 %10 + remainder ) / 2;
         binary1 = binary1/10;
         binary2 = binary2/10;
    }
    if(remainder!=0)
         sum[i++] = remainder;
    --i;
    printf("Sum of two binary numbers: ");
    while(i>=0)
         printf("%d",sum[i--]);
}

void binhex()
{
    long int binaryNumber,hexadecimalNumber=0,j=1,remainder;
    printf("Enter any binary number: ");
    scanf("%ld",&binaryNumber);
    while(binaryNumber!=0){
    remainder=binaryNumber%10;
    hexadecimalNumber=hexadecimalNumber+remainder*j;
        j=j*2;
        binaryNumber=binaryNumber/10;
      }
    printf("Equivalent hexadecimal value: %lX",hexadecimalNumber);
}
