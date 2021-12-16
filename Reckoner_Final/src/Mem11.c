#include"../inc/header.h"

int hexdec()
{
    char hex[100];
    printf("Enter Hexadecimal: ");
    scanf("%s", hex);
    printf("\nDecimal number is: %d\n", HexadecimalToDecimal(hex));
}

void cubeRoot()
{
    int n;
    double result = 0;
    printf("\nEnter a number: ");
    scanf("%d",&n);
    result = cbrt(n);
    printf("\nResult = %lf", result);
}

int HexadecimalToDecimal(char *hex) 
{
    
{
    int p = 0; 
    int decimal = 0;
    int r, i;
    
    // instead of reading charcacters from Right-To-Left
    // we can also read character from Left-To-Right
    // we just have to initialize p with strlen(c) - 1
    // and decrement p in each iteration
    for(i = strlen(hex) - 1 ; i >= 0 ; --i){
        
        // converting c[i] to appropriate decimal form
        if(hex[i]>='0'&&hex[i]<='9'){
            r = hex[i] - '0';
        }
        else{
            r = hex[i] - 'A' + 10;
        }
        
        decimal = decimal + r * pow(16 , p);
        ++p;
    }
    
    return decimal;
}
}