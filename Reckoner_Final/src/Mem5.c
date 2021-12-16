#include"../inc/header.h"

int octbin()
{
    char octalnum[MAX];
    long i = 0;
    printf("Enter any octal number: ");
    scanf("%s", octalnum);
    printf("Equivalent binary value: ");
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

int octdec()
{
    long int octalNumber,decimal =0;
    int i=0;
    printf("Enter any octal number: ");
    scanf("%ld",&octalNumber);
    while(octalNumber!=0)
    {
         decimal = decimal + (octalNumber % 10) * pow(8,i++);
         octalNumber = octalNumber/10;
    }
    printf("Equivalent decimal value: %ld",decimal);
    return 0;
}

int octhex()
{
  int octalNumber,rem,i=0;
  printf("Enter Octal number: ");
  scanf("%d", &octalNumber);
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

  printf ("Hexadecimal number is:");
  int j;
  for(j=i-1;j>=0;j--)
    printf("%c",Hex[j]);
}