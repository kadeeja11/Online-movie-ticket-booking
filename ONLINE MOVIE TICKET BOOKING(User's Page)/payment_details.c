void payment_details(int n,int cost,char film[],char shift[])
{

    struct card_details
    {
        //char validation[] = "false";
        //int card_no;
        char card_no[19];
        char ch1,cvv[3];
        struct date
            {
                int month;
                int year;
            }valid_thru;
    }c1;
    int i,k=0,j=0,m,total,count=0;
    long long int mob_no;
    char card,option,name[25];
    char valid[5];
    system("cls");
    printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf("                                              PAYMENT DETAILS                                                                                                                                   \n");
    printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    //total = (n*cost);

    printf("\nTotal Amount = %d",(n*cost));
    printf("\n\nEnter c for Credit Card or d for Debit Card ");
    //fflush(stdin);
    scanf(" %c",&card);

    if(card=='c'||card=='C')
    {
     printf("\nCard Number : ");
     scanf(" %[^\n]s",&c1.card_no);

    for(i=0;i<strlen(c1.card_no); i++)
    {
        if(isalpha(c1.card_no[i]))
            {

            j=j+1;
            }
    }
    if(j>=1)
    {
        printf("\nWRONG CARD NUMBER \n");
    }

    else
    {
     printf("\nName on the Card : ");
     scanf(" %[^\n]s",name);

     printf("\nValid Thru: ");
    scanf(" %[^\n]s",&valid);



    for(m=0;m<strlen(valid);m++)
    {

   if(valid[m]>=47&&valid[m]<=57)
    {
        count=count+1;
    }

    }
    if(count>=1)
    {
     printf("\nCVV : ");
     for(i=0;i<3;i++)
     {
             c1.ch1=getch();
             c1.cvv[i]=c1.ch1;

             if(c1.ch1>=48&&c1.ch1<=57)
             {

             if(c1.ch1!=13)      //13 is ASCII of Enter key
                   printf("*");
             if(c1.ch1 == 13)
                   break;
             }
             else
                {
                    k=++k;
                    if(c1.ch1!=13)      //13 is ASCII of Enter key
                   printf("*");
                    if(c1.ch1 == 13)
                   break;
                }
     }
     if(k==1||k==2||k==3)
     {
         printf("\nINVALID CVV\n");
         exit(0);
     }
     printf("\n\nEnter your mobile number : ");
     scanf("%lld",&mob_no);
     if(mob_no<1000000000||mob_no>9999999999)
     {
         printf("\nEnter a valid mobile number");
         exit(0);
     }
     printf("\nEnter p for pay now and c for cancel");
     printf("\n\n\t\t\tPAY NOW\t\t\tCANCEL \n\n");

     scanf(" %c",&option);
     system("cls");
     if(option=='P'||option=='p')
     {
         printf("\nTransaction Successfull\nRupees %d debited from your A/C by Online Movie Ticket Booking \n",(n*cost));

     }
     else if(option=='C'||option=='c')
     {
         printf("\nPayment cancelled\n");
         exit(0);
     }
     else
     {
         printf("\nEnter either p or c ");
     }
    }
    }
    }
    else if(card=='D'||card=='d')
    {
     printf("\nCard Number : ");
     scanf(" %[^\n]s",&c1.card_no);

    for(i=0;i<strlen(c1.card_no); i++)
    {
        if(isalpha(c1.card_no[i]))
            {

            j=j+1;
            }
    }
    if(j>=1)
    {
        printf("\nWRONG CARD NUMBER \n");
    }

    else
    {
     printf("\nName on the Card : ");
     scanf(" %[^\n]s",name);

     printf("\nValid Thru: ");
    scanf(" %[^\n]s",&valid);



    for(m=0;m<strlen(valid);m++)
    {

   if(valid[m]>=47&&valid[m]<=57)
    {
        count=count+1;
    }

    }
    if(count>=1)
    {
     printf("\nCVV : ");
     for(i=0;i<3;i++)
     {
             c1.ch1=getch();
             c1.cvv[i]=c1.ch1;

             if(c1.ch1>=48&&c1.ch1<=57)
             {

             if(c1.ch1!=13)      //13 is ASCII of Enter key
                   printf("*");
             if(c1.ch1 == 13)
                   break;
             }
             else
                {
                    k=++k;
                    if(c1.ch1!=13)      //13 is ASCII of Enter key
                   printf("*");
                    if(c1.ch1 == 13)
                   break;
                }
     }
     if(k==1||k==2||k==3)
     {
         printf("\nINVALID CVV\n");
         exit(0);
     }
     printf("\n\nEnter your mobile number : ");
     scanf("%lld",&mob_no);
     if(mob_no<1000000000||mob_no>9999999999)
     {
         printf("\n\nEnter a valid mobile number");
         system("pause");
         main();
     }
     printf("\nEnter p for pay now and c for cancel");
     printf("\n\n\t\t\tPAY NOW\t\t\tCANCEL \n\n");

     scanf(" %c",&option);
     system("cls");
     if(option=='P'||option=='p')
     {
         printf("\nTransaction Successfull\nRupees %d debited from your A/C by Online Movie Ticket Booking \n",(n*cost));

     }
     else if(option=='C'||option=='c')
     {
         printf("\nPayment cancelled\n");
         exit(0);
     }
     else
     {
         printf("\nEnter either p or c ");
     }
    }
    }


    }
    else
    {
        printf("\nEnter either D or C ");
        exit(0);
    }

    booking_details(name,mob_no,film,shift,n,cost);
    system("pause");
    main();
}
