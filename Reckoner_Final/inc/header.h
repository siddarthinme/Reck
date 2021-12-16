#ifndef _HEADER_H_
#define _HEADER_H_
// Header Files
#include<stdio.h>
#include<time.h>
#include<math.h>
#define PI 3.141592654
#define MAX 1000
#define ARRAY_SIZE  1000

    void predigits(char c1,char c2);
    void postdigits(char c,int n);
    //char roman_Number[1000];
    int hex_octal(char hex[]);
    int hex_octal(char hex[]);

    



// Menu function (to be called in switch)
//void clear(void *,void *,int)

void main();


int ScientificCalculator();

int Addition();
int Subtraction();
int Multiplication();
int Division();
int Modulas();
int Power();
int Factorial();
int Sine();
int Cosine();
int Tangent();
int LogBase();
int LogBase10();
int eToPowerX();
int SquareRoot();
void CubeRoot();
void Absolute();
void SineInverse();
void CosineInverse();
void TangentInverse();
void ncr();
void npr();
long long factorialReturn();

int NumberSystemConversions();

void bindec();
void addbin();
void binhex();
void binoct();
void decbin();
void dechex();
int decoct();
int hexbin();
int hexoct();
int octbin();
int octdec();
int octhex();

int HexadecimalToDecimal();

#endif
