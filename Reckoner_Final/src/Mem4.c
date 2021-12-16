#include"../inc/header.h"


int decoct()
{
        long decimalNumber, remainder, quotient;
        int octalNumber[100], i = 1, j;
    
        printf("Enter the decimal number: ");
        scanf("%ld", &decimalNumber);
        quotient = decimalNumber;
        while (quotient != 0)
        {
            octalNumber[i++] = quotient % 8;
            quotient = quotient / 8;
        }
        printf("Equivalent octal value of decimal no %d: ", decimalNumber);
        for (j = i - 1; j > 0; j--)
            printf("%d", octalNumber[j]);
}

int hexbin()
{
    char binaryNumber[MAX],hexaDecimal[MAX];
    long int i=0;
    printf("Enter any hexadecimal number: ");
    scanf("%s",hexaDecimal);
    printf("\nEquivalent binary value: ");
    while(hexaDecimal[i]){
         switch(hexaDecimal[i]){
             case '0': printf("0000"); break;
             case '1': printf("0001"); break;
             case '2': printf("0010"); break;
             case '3': printf("0011"); break;
             case '4': printf("0100"); break;
             case '5': printf("0101"); break;
             case '6': printf("0110"); break;
             case '7': printf("0111"); break;
             case '8': printf("1000"); break;
             case '9': printf("1001"); break;
             case 'A': printf("1010"); break;
             case 'B': printf("1011"); break;
             case 'C': printf("1100"); break;
             case 'D': printf("1101"); break;
             case 'E': printf("1110"); break;
             case 'F': printf("1111"); break;
             case 'a': printf("1010"); break;
             case 'b': printf("1011"); break;
             case 'c': printf("1100"); break;
             case 'd': printf("1101"); break;
             case 'e': printf("1110"); break;
             case 'f': printf("1111"); break;
             default:  printf("\nInvalid hexadecimal digit %c ",hexaDecimal[i]); return 0;
         }
         i++;
    }
}

int hexoct() 
{
char hex[20],c; 
int n; 
printf("Enter hexadecimal number: "); 
scanf("%s",hex); printf("Octal number: %d",hex_octal(hex)); 
return 0; 
}
int hex_octal(char hex[]) /* Function to convert hexadecimal to octal. 
*/ 
{ 
int i,length, decimal=0, octal=0;
for(length=0; hex[length]!='\0'; ++length); for(i=0; hex[i]!='\0'; ++i, 
--length) 
{ 
if(hex[i]>='0' && hex[i]<='9') decimal+=(hex[i]-'0')*pow 
(16,length-1);
if(hex[i]>='A' && hex[i]<='F') decimal+=(hex[i]-55)*pow(16,length-1); 
if(hex[i]>='a' && hex[i]<='f') decimal+=(hex[i]-87)*pow(16,length-1); 
} /* At this point decimal contains the decimal value of given 
hexadecimal number. */ 
i=1; 
while(decimal!=0) 
{ 
octal+=(decimal%8)*i; 
decimal/=8; 
i*=10; 
}
return octal;
}
