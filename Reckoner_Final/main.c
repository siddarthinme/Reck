#include"./inc/header.h"
void main()
{
	time_t t;
    time(&t);
    printf("---------------------------\n%s", ctime(&t));  
    printf("---------------------------\n");   

    int choice;
    printf("Select an option:\n");
    printf("1. Scientific Calculator \n2. Number System Conversion");
    printf("\n---------------------------\n");
    printf("Enter Choice: ");
    scanf("%d",&choice);
    if ((choice == 1) || (choice == 2))
    {
        switch(choice)
	    {
            case 1:
                ScientificCalculator();
                break;
            case 2:
                NumberSystemConversions();
                break;
            default:
                printf("\nEnter Valid Input");
	    }
    
    }
    else
    {
        fprintf(stderr,"Input not recognised as an integer, please try again.\n");
         // anything else you want to do when it fails goes here
    }
    
}
