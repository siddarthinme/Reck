#ifndef _TESTHEADER_H_
#define _TESTHEADER_H_

#include"stdio.h"
#include"assert.h"

#define MAX 1000
#define ARRAY_SIZE 1000
#define PI 3.141592654

int Add(int num1, int num2);
int Sub(int num1, int num2);
int Mul(int num1, int num2);
int Div(int num1, int num2);
int Modulus(int num1, int num2);
int Power(double base, double expo);

int Factorial(long long n);
int Sine(double a);
int Cosine(double a);
int Tangent(double a);
int LogBase(double a);
int LogBase10(double a);
int eToPowerX(double a);
int SquareRoot(int n);
void CubeRoot(int n);
void Absolute(int n);
void SineInverse(double n);
void CosineInverse(double n);
void TangentInverse(double n);
void npr(long long n, long long r);
void ncr(long long n,long long r);




int BinDec(long double binaryNumber);
int BinHex(long double binaryNumber);
int BinOct(long int binaryNumber);

void DecBin(long int decimalNumber);
void DecOct(long decimalNumber);
void DecHex(long int decimalNumber);

void OctDec(long int octalNumber);
void OctBin(long int octalNumber);
void OctHex(long int octalNumber);

void HexDec(char hex[ARRAY_SIZE]);
void HexBin(char hex[ARRAY_SIZE]);
//void HexOct(char hex[ARRAY_SIZE]);




#endif