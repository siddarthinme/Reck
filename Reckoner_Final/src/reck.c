#include<math.h>
#define MAX 1000
#define ARRAY_SIZE  1000
#define PI 3.141592654

int Add(int num1, int num2)
{
    
    int sum = num1+num2;
    return sum;
}

int Sub(int num1, int num2)
{
    int sub = num1-num2;
    return sub;
}

int Mul(int num1, int num2)
{
    int mul = num1*num2;
    return mul;
}

int Div(int num1, int num2)
{
    int div = num1/num2;
    return div;
}

int Modulus(int num1, int num2)
{
    int rem=num1%num2;
    return rem;
}

int Power(double base, double expo)
{
    double result = pow(base, expo);
    return result;
}

int Factorial(long long n)
{
    long long intResult = 0;
    long long f, i;
    f = 1;
    for(i = 1; i<=n; i++)
    {
        f = f * i;
    }
    intResult = f;
    return intResult;
}

int Sine(double a)
{
    double result = sin(a);
    return result;
}
int Cosine(double a)
{
    double result = cos(a);
    return result;
}
int Tangent(double a)
{
    double result = tan(a);
    return result;
}
int LogBase(double a)
{
    double result;
    if(a<=0.0)
    {
        return " Math error";
    }
    else
    {
    double result = log(a);
    return result; 
    } 
}
int LogBase10(double a)
{
    if(a<=0.0)
    {
    return "Math Error";
    }
    else
    {
    double result = log10(a);
    return result;
    }
    
}
int eToPowerX(double a)
{
    double result = exp(a);
    return result;
}
int SquareRoot(int n)
{
    if (n<0)
    {
    return "Math Error";
    }
    else
    {
    double result = sqrt(n);
    return result;
    }
}
void CubeRoot(int n)
{
    double result = 0;
    result = cbrt(n);
    return result;
}
void Absolute(double n)
{
    long long intResult = 0;
    intResult = abs(n);
    return intResult;
}
void SineInverse(double n)
{
    double radiansresult = 0, degreeresult =0;
    if(n>1 || n<-1)  // Parameter not in Range
    {
        return "Not in Range";
    }
    else
    {
        radiansresult = asin(n);

      // converting radians to degree
        degreeresult = asin(n)*180/PI;
        return radiansresult, degreeresult;
    }
}
void CosineInverse(double n)
{
    double radiansresult = 0, degreeresult =0;
    if(n>1 || n<-1)  // Parameter not in Range
    {
        return "Not in Range";
    }
    else
    {
        radiansresult = acos(n);

      // converting radians to degree
        degreeresult = acos(n)*180/PI;
        return radiansresult, degreeresult;
    }
}
void TangentInverse(double n)
{
    double radiansresult = 0, degreeresult =0;

    radiansresult = atan(n);

    // Converting radians to degrees
    degreeresult = (radiansresult * 180) / PI;
    return radiansresult, degreeresult;
}
void npr(long long n, long long r)
{
        long long intResult = 0;
        if(n>=r && n>0 && r>=0)
        {
            intResult = factorialReturn(n) / factorialReturn(n - r);
            return intResult;
        }
        else
        {
            return "Math Error\n";
        }
}
void ncr(long long n,long long r)
{
    long long intResult = 0;
    if(n>=r && n>0 && r>=0)
    {
    intResult = factorialReturn(n) / (factorialReturn(r) * factorialReturn(n - r));
    return intResult;
    }
    else
    {
    return "Math Error";
    }
}





int BinDec(long int binaryNumber)
{
    long int decimalNumber=0,j=1,remainder;
    while(binaryNumber!=0)
    {
        remainder=binaryNumber%10;
        decimalNumber=decimalNumber+remainder*j;
        j=j*2;
        binaryNumber=binaryNumber/10;
    }
    return decimalNumber;
}

int BinHex(long int binaryNumber)
{
    long int hexadecimalNumber=0,j=1,remainder;
    while(binaryNumber!=0)
    {
    remainder=binaryNumber%10;
    hexadecimalNumber=hexadecimalNumber+remainder*j;
        j=j*2;
        binaryNumber=binaryNumber/10;
      }
    return hexadecimalNumber;
}

int BinOct(long int binaryNumber)
{
    long int octalnum = 0, j = 1, remainder;
    while (binaryNumber != 0)
    {
        remainder = binaryNumber % 10;
        octalnum = octalnum + remainder * j;
        j = j * 2;
        binaryNumber = binaryNumber / 10;
    }
    return octalnum;
}

void DecBin(long int decimalNumber)
{
    long int remainder,quotient;
    int binaryNumber[100],i=1,j;
    quotient = decimalNumber;
    while(quotient!=0){
         binaryNumber[i++]= quotient % 2;
         quotient = quotient / 2;
    }
    return decimalNumber;
    for(j = i -1 ;j> 0;j--)
         return decimalNumber;

}

void DecOct(long decimalNumber)
{
    long remainder, quotient;
    int octalNumber[100], i = 1, j;
    
    quotient = decimalNumber;
    while (quotient != 0)
    {
        octalNumber[i++] = quotient % 8;
        quotient = quotient / 8;
    }
    for (j = i - 1; j > 0; j--)
        printf("%d", octalNumber[j]);
}

void DecHex(long int decimalNumber)
{
    long int binaryNumber,hexadecimalNumber=0,j=1,remainder;
    while(binaryNumber!=0){
    remainder=binaryNumber%10;
    hexadecimalNumber=hexadecimalNumber+remainder*j;
        j=j*2;
        binaryNumber=binaryNumber/10;
      }
    return hexadecimalNumber;

}


void OctDec(long int octalNumber)
{
    long int decimal =0;
    int i=0;
    
    while(octalNumber!=0)
    {
         decimal = decimal + (octalNumber % 10) * pow(8,i++);
         octalNumber = octalNumber/10;
    }
    return decimal;
}

void OctBin(long int octalNumber)
{
    char octalnum[MAX];
    long i = 0;
    while (octalnum[i])
    {
        switch (octalnum[i])
        {
        case '0':
            printf("000"); break;
        case '1':
            printf("001"); break;
        case '2':
            printf("010"); break;
        case '3':
            printf("011"); break;
        case '4':
            printf("100"); break;
        case '5':
            printf("101"); break;
        case '6':
            printf("110"); break;
        case '7':
            printf("111"); break;
        default:
            printf("\n Invalid octal digit %c ", octalnum[i]);
            return 0;
        }
        i++;
    }
    return 0;
}

void OctHex(long int octalNumber)
{
    int rem,i=0;
    char Hex[100];
    int decimal = 0, sem = 0;

        //Octal to decimal covert
    while(octalNumber!=0)
    {
            decimal=decimal+(octalNumber%10)*pow(8,sem);
            sem++;
            octalNumber=octalNumber/ 10;
    }
    //Decimal to Hexadecimal
    while(decimal!=0)
    {
        rem=decimal%16;
        //Convert Integer to char
        if(rem<10)
            Hex[i++]=rem+48;// 48 Ascii=0
        else
            Hex[i++]=rem+55;//55 Ascii=7
    decimal/=16;
    }

    int j;
    for(j=i-1;j>=0;j--)
        printf("%c",Hex[j]);
    return 0;
}


void HexDec(char hex[ARRAY_SIZE])
{
    long long decimal = 0, base = 1;
    int i = 0, value, length;
    /* Get hexadecimal value from user */
    length = strlen(hex);
    for(i = length--; i >= 0; i--)
    {
        if(hex[i] >= '0' && hex[i] <= '9')
        {
            decimal += (hex[i] - 48) * base;
            base *= 16;
        }
        else if(hex[i] >= 'A' && hex[i] <= 'F')
        {
            decimal += (hex[i] - 55) * base;
            base *= 16;
        }
        else if(hex[i] >= 'a' && hex[i] <= 'f')
        {
            decimal += (hex[i] - 87) * base;
            base *= 16;
        }
    }
    return decimal;
}

void HexBin(char hex[ARRAY_SIZE])
{
    char binaryNumber[MAX],hexaDecimal[MAX];
    long int i=0;
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
    return 0;
}

//void HexOct(char hex[ARRAY_SIZE]);