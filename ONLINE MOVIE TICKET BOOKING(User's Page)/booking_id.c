#include<stdio.h>
#include<stdlib.h>
booking_details(char name[],long long int mob_no,char film[],char shift[],int n,int cost)
{
    char yn,y_n;
    printf("\n\n\n\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n                                       BOOKING DETAILS                                                                                       ");
    printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n\nMovie :  %s",film);
    printf("\nMobile number : %lld\t\t\t\tShift : %s",mob_no,shift);
    printf("\n\t\t\t\t\t\t\tNo. of Tickets : %d",n);
    printf("\n\t\t\t\t\t\t\tTotal Amount paid : %d",(n*cost));
    printf("\n\n\nThank you \n\n\n");
    printf("Go to main : (y/n) ");
    scanf(" %c",&yn);
    if(yn=='Y'||yn=='y')
    {
    system("pause");
    main();
    }
    else if(yn=='N'||yn=='n')
    {
        printf("\nDo you want to cancel the ticket ");
        scanf(" %c",&y_n);
        if(y_n=='Y'||y_n=='y')
        {
            cancel_tickets(mob_no,name,n,cost);
        }
        else if(y_n=='N'||y_n=='n')
        {
            booking_details(name,mob_no,film,shift,n,cost);
        }
        else
        {
            printf("\nEnter either y or n");
            booking_details(name,mob_no,film,shift,n,cost);
        }
    }
}

