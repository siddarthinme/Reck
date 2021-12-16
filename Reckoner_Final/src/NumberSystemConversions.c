#include"../inc/header.h"

int NumberSystemConversions()
{
    
	int choice;
    printf("\n---------------------------------------------------------------");
    printf("\n                  Number system Conversion                      ");
    printf("\n---------------------------------------------------------------");
	printf("\n1.  Binary to Decimal\n2.  Binary to octal\n3.  Binary to Hexadecimal\n4.  Decimal to Binary\n5.  Decimal to octal\n6.  Decimal to Hexadecimal \n7.  Octal to Decimal\n8.  Octal to Binary\n9.  Octal to Hexadeciaml\n10. Hexadecimal to Decimal\n11. Hexadecimal to Binary\n12. Hexadecimal to Octal");
	printf("\nEnter Choice: ");
	scanf("%d",&choice);

    if ( choice >=1 && choice <=12 )
    {
        if(choice == 1)
        {
		    bindec();
	    }
        else if(choice == 2)
        {
            binoct();
        }
        else if(choice == 3)
        {
            binhex();
        }
        else if(choice == 4)
        {
            decbin();
        }
        else if(choice == 5)
        {
            decoct();
        }
        else if(choice == 6)
        {
            dechex();
        }
        else if(choice == 7)
        {
            octdec();
        }
        else if(choice == 8)
        {
            octbin();
        }
        else if(choice == 9)
        {
            octhex();
        }
        else if(choice == 10)
        {
            hexdec();
        }
        else if(choice == 11)
        {
            hexbin();
        }
        else if(choice == 12)
        {
            hexoct();
        }
  
    }
    else
    {
        fprintf(stderr,"Input not recognised as an integer, please try again.\n");
         // anything else you want to do when it fails goes here
    }	
}

