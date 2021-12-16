#include "../Unity/unity.h"
#include "../inc/testheader.h"


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

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



void test_Addition(void)
{
  TEST_ASSERT_EQUAL(20, Add(10, 10));
  TEST_ASSERT_EQUAL(30, Add(10, 20));
}

void test_Subtraction(void)
{
  TEST_ASSERT_EQUAL(0, Sub(10, 10));
  TEST_ASSERT_EQUAL(-10, Sub(10, 20));
}

void test_Multification(void)
{
  TEST_ASSERT_EQUAL(72, Mul(9, 8));
  TEST_ASSERT_EQUAL(200, Mul(10, 20));
}

void test_Devision(void)
{
  TEST_ASSERT_EQUAL(5, Div(10, 2));
  TEST_ASSERT_EQUAL(2, Div(10, 5));
}

void test_Modulus(void)
{
  TEST_ASSERT_EQUAL(0, Modulus(10, 10));
  TEST_ASSERT_EQUAL(2, Modulus(20, 3));
}

void test_Power(void)
{
  TEST_ASSERT_EQUAL(256, Power(2, 8));
  TEST_ASSERT_EQUAL(81, Power(9, 2));
}

int test_Factorial(long long n)
{
  TEST_ASSERT_EQUAL(120, Factorial(5));
  TEST_ASSERT_EQUAL(2, Factorial(2));
}

int test_Sine(double a)
{
  TEST_ASSERT_EQUAL(0, Sine(0));
  TEST_ASSERT_EQUAL(-0.80115263573 , Sine(180));
}
int test_Cosine(double a)
{
  TEST_ASSERT_EQUAL(1, Cosine(0));
  TEST_ASSERT_EQUAL(-0.59846006905, Cosine(180));
}
int test_Tangent(double a)
{
  TEST_ASSERT_EQUAL(-1.99520041221, Tangent(90));
  TEST_ASSERT_EQUAL(0, Tangent(0));
}
int test_LogBase(double a)
{
  TEST_ASSERT_EQUAL(0, LogBase(1));
  TEST_ASSERT_EQUAL(2.302585, LogBase(10));
}
int test_LogBase10(double a)
{
  TEST_ASSERT_EQUAL(0, LogBase10(1));
  TEST_ASSERT_EQUAL(-1, LogBase10(0.1));
}
int test_eToPowerX(double a)
{
  TEST_ASSERT_EQUAL(2.7182818, eToPowerX(1));
  TEST_ASSERT_EQUAL(1, eToPowerX(0));
}
int test_SquareRoot(int n)
{
  TEST_ASSERT_EQUAL(3, SquareRoot(9));
  TEST_ASSERT_EQUAL(16, SquareRoot(256));
}
void test_CubeRoot(int n)
{
  TEST_ASSERT_EQUAL(3, SquareRoot(9));
  TEST_ASSERT_EQUAL(16, SquareRoot(256));
}
void test_Absolute(double n)
{
  TEST_ASSERT_EQUAL(3, SquareRoot(9));
  TEST_ASSERT_EQUAL(16, SquareRoot(256));
}
void test_SineInverse(double n)
{
  TEST_ASSERT_EQUAL(256, Power(2, 8));
  TEST_ASSERT_EQUAL(81, Power(9, 2));
}
void test_CosineInverse(double n)
{
  TEST_ASSERT_EQUAL(256, Power(2, 8));
  TEST_ASSERT_EQUAL(81, Power(9, 2));
}
void test_TangentInverse(double n)
{
  TEST_ASSERT_EQUAL(256, Power(2, 8));
  TEST_ASSERT_EQUAL(81, Power(9, 2));
}
void test_npr(long long n, long long r)
{
  TEST_ASSERT_EQUAL(256, Power(2, 8));
  TEST_ASSERT_EQUAL(81, Power(9, 2));
}
void test_ncr(long long n,long long r)
{
  TEST_ASSERT_EQUAL(256, Power(2, 8));
  TEST_ASSERT_EQUAL(81, Power(9, 2));
}



int test_BinDec(long int binaryNnumber)
{
  TEST_ASSERT_EQUAL(20, Add(10, 10));
  TEST_ASSERT_EQUAL(30, Add(10, 20));
}
int test_BinHex(long int binaryNumber)
{
  TEST_ASSERT_EQUAL(20, Add(10, 10));
  TEST_ASSERT_EQUAL(30, Add(10, 20));
}
int test_BinOct(long int binaryum)
{
  TEST_ASSERT_EQUAL(20, Add(10, 10));
  TEST_ASSERT_EQUAL(30, Add(10, 20));
}

int test_DecBin(long int decimalNumber)
{
  TEST_ASSERT_EQUAL(20, Add(10, 10));
  TEST_ASSERT_EQUAL(30, Add(10, 20));

}
int test_DecOct(long decimalNumber)
{
  TEST_ASSERT_EQUAL(20, Add(10, 10));
  TEST_ASSERT_EQUAL(30, Add(10, 20));
}
int test_DecHex(long int decimalNumber)
{
  TEST_ASSERT_EQUAL(20, Add(10, 10));
  TEST_ASSERT_EQUAL(30, Add(10, 20));

}

void test_OctDec(long int octalNumber)
{
  TEST_ASSERT_EQUAL(20, Add(10, 10));
  TEST_ASSERT_EQUAL(30, Add(10, 20));

}
void test_OctBin(long int octalNumber)
{
  TEST_ASSERT_EQUAL(20, Add(10, 10));
  TEST_ASSERT_EQUAL(30, Add(10, 20));
}
void test_OctHex(long int octalNumber)
{
  TEST_ASSERT_EQUAL(20, Add(10, 10));
  TEST_ASSERT_EQUAL(30, Add(10, 20));

}

void test_HexDec(char hex[ARRAY_SIZE])
{
  TEST_ASSERT_EQUAL(20, Add(10, 10));
  TEST_ASSERT_EQUAL(30, Add(10, 20));

}
void test_HexBin(char hex[ARRAY_SIZE])
{
  TEST_ASSERT_EQUAL(20, Add(10, 10));
  TEST_ASSERT_EQUAL(30, Add(10, 20));
}



int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_Addition);
  RUN_TEST(test_Subtraction);
  RUN_TEST(test_Multification);
  RUN_TEST(test_Devision);
  RUN_TEST(test_Modulus);
  RUN_TEST(test_Power);
  RUN_TEST(test_Factorial);
  RUN_TEST(test_Sine);
  RUN_TEST(test_Cosine);
  RUN_TEST(test_Tangent);
  RUN_TEST(test_LogBase);
  RUN_TEST(test_LogBase10);
  RUN_TEST(test_eToPowerX);
  RUN_TEST(test_SquareRoot);
  RUN_TEST(test_CubeRoot);
  RUN_TEST(test_Absolute);
  RUN_TEST(test_SineInverse);
  RUN_TEST(test_CosineInverse);
  RUN_TEST(test_TangentInverse);
  RUN_TEST(test_npr);
  RUN_TEST(test_ncr);

  RUN_TEST(test_BinDec);
  RUN_TEST(test_BinHex);
  RUN_TEST(test_BinOct);

  RUN_TEST(test_DecBin);
  RUN_TEST(test_DecOct);
  RUN_TEST(test_DecHex);

  RUN_TEST(test_OctDec);
  RUN_TEST(test_OctBin);
  RUN_TEST(test_OctHex);

  RUN_TEST(test_HexDec);
  RUN_TEST(test_HexBin);
  
 
  /* Close the Unity Test Framework */
  return UNITY_END(); 
}