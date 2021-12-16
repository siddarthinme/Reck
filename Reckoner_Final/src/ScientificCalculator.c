#include"../inc/header.h"

int ScientificCalculator()
{
	int choice;
	printf("\n---------------------------------------------------------------");
    printf("\n                     Scientific Calculator                      ");
    printf("\n---------------------------------------------------------------");
    printf("\n1.  Addition");
    printf("\n2.  Subtraction");
    printf("\n3.  Multiplication");
    printf("\n4.  Division");
    printf("\n5.  Modulas");
    printf("\n6.  Power");
	printf("\n7.  Factorial");
    printf("\n8.  Sine");
    printf("\n9.  Cosine");
    printf("\n10. Tangent");
    printf("\n11. log(base e)");
    printf("\n12. log(base 10)");
    printf("\n13. e^x");
    printf("\n14. SquareRoot");
    printf("\n15. CubeRoot");
    printf("\n16. Absolute Value");
    printf("\n17. Sine Inverse");
    printf("\n18. Cosine Inverse ");
    printf("\n19. Tangent Inverse");
    printf("\n20. Permutation (nPr)");
    printf("\n21. Combination (nCr)");

    printf("\n\nEnter your choice: ");
	scanf("%d",&choice);
    if ((choice >= 1 && choice <=21))
    {
        if(choice == 1)
        {
            Addition();
        }
        else if(choice == 2)
        {
            Subtraction();
        }
        else if(choice == 3)
        {
            Multiplication();
        }
        else if(choice == 4)
        {
            Division();
        }
        else if(choice == 5)
        {
            Modulus();
        }
        else if(choice == 6)
        {
            Power();
        }
        else if(choice == 7)
        {
            factorial();
        }
        else if ( choice == 8)
        {
            sine();
        }
        else if ( choice == 9)
        {
            cosine();
        }
        else if ( choice == 10)
        {
            tangent();
        }
        else if ( choice == 11)
        {
            logBase();
        }
        else if ( choice == 12)
        {
            logBase10();
        }
        else if ( choice == 13)
        {
            eToPowerX();
        }
        else if ( choice == 14)
        {
            squareRoot();
        }
        else if ( choice == 15)
        {
            cubeRoot();
        }
        else if ( choice == 16)
        {
            absolute();
        }
        else if ( choice == 17)
        {
            sineInverse();
        }
        else if ( choice == 18)
        {
            cosineInverse();
        }
        else if ( choice == 19)
        {
            tangentInverse();
        }
        else if ( choice == 20)
        {
            npr();
        }
        else if ( choice == 21)
        {
            ncr();
        }
        else
        {
            printf("\nEnter Correct Choice");
        }
        
    }
    else
    {
        fprintf(stderr,"Input not recognised as an integer, please try again.\n");
         // anything else you want to do when it fails goes here
    }
}

