cancel_tickets(long long int mob_no,char name[],int n,int cost)
{
    system("cls");
    char check;
    long long int mob;
    printf("\nEnter your registered mobile number : ");
    scanf("%lld",&mob);
    if(mob==mob_no)
    {
        //printf("\nName : %s",name);
        printf("\nAre you sure you want to cancel the ticket? 'y' or 'n' ");
        scanf(" %c",&check);
        if(check=='y'||check=='Y')
        {
            printf("\nCancellation successful\n\n%d rupees is debited back into your account\n\nThank you\n\n",(n*cost));
            system("pause");
            main();
        }
        else if(check=='N'||check=='n')
        {
            printf("\nCancellation denied");
        }
        else
        {
            printf("\nEnter either y or n");
        }
        exit(0);

    }
    else
    {
        printf("\nNo ticket is booked with this mobile number\nThank you\n");
        exit(0);
    }
    system("pause");
    main();
}
