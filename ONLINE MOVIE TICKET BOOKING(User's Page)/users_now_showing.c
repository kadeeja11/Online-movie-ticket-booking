#include<stdio.h>
#include<stdlib.h>

users_now_showing()
{
    system("cls");
    int ch,cost,c,i;
    char film[50],shift[10],chr;
    printf("\n\n\n\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n                                         NOW SHOWING                                                                                                 ");
    printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    FILE * fPtr;
    fPtr = fopen("C:\\Users\\junai\\Desktop\\new-file-latest.txt", "r");


    /* fopen() return NULL if last operation was unsuccessful */
    if(fPtr == NULL)
    {
        /* Unable to open file hence exit */
        printf("Unable to open file.\n");
        printf("Please check whether file exists and you have read privilege.\n");
        exit(0);
    }

    do
    {
        /* Read single character from file */
        chr = fgetc(fPtr);

        /* Print character read on console */
        putchar(chr);

    } while(chr != EOF); /* Repeat this if last read character is not EOF */


    /* Done with this file, close file to release resource */
    fclose(fPtr);
    printf("\n Enter your choice ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: system("cls");
                strcpy(film,"Spider-man: No way home");
                printf("%s",film);
                cost = 180;
                printf("\nCost per head = %d",cost);

                printf("\nSelect show timing :\n1. 11am\n2. 2pm\n3. 5pm\n4. 8pm\n5. 11pm");
                printf("\nEnter your choice ");
                scanf("%d",&c);
                switch(c)
                {
                    case 1 : system("cls");
                             strcpy(shift,"11am");
                             initial_seat_11am(cost,film,shift);
                             break;
                    case 2 : system("cls");
                             strcpy(shift,"2pm");
                             initial_seat_2pm(cost,film,shift);
                             break;
                    case 3:  system("cls");
                             strcpy(shift,"5pm");
                             initial_seat_5pm(cost,film,shift);
                             break;
                    case 4:  system("cls");
                             strcpy(shift,"8pm");
                             initial_seat_8pm(cost,film,shift);
                             break;
                    case 5:  system("cls");
                             strcpy(shift,"11pm");
                             initial_seat_11pm(cost,film,shift);
                             break;
                    default: printf("\nEnter 1-5 only");
                }
                break;
        case 2: system("cls");
                strcpy(film,"Pushpa");
                printf("%s",film);
                cost = 150;
                printf("\nCost per head = %d",cost);

                printf("\nSelect show timing :\n1. 11am\n2. 2 pm\n3. 5pm\n4. 8pm\n5. 11pm");
                printf("\nEnter your choice ");
                scanf("%d",&c);
                switch(c)
                {
                    case 1 : system("cls");
                             strcpy(shift,"11am");
                             initial_seat_11am(cost,film,shift);
                             break;
                    case 2 : system("cls");
                             strcpy(shift,"2pm");
                             initial_seat_2pm(cost,film,shift);
                             break;
                    case 3:  system("cls");
                             strcpy(shift,"5pm");
                             initial_seat_5pm(cost,film,shift);
                             break;
                    case 4:  system("cls");
                             strcpy(shift,"8pm");
                             initial_seat_8pm(cost,film,shift);
                             break;
                    case 5:  system("cls");
                             strcpy(shift,"11pm");
                             initial_seat_11pm(cost,film,shift);
                             break;
                    default: printf("\nEnter 1-5 only");
                }
                break;

         case 3:system("cls");
                strcpy(film,"Hridayam");
                printf("%s",film);
                cost = 130;
                printf("\nCost per head = %d",cost);

                printf("\nSelect show timing :\n1. 11am\n2. 2 pm\n3. 5pm\n4. 8pm\n5. 11pm");
                printf("\nEnter your choice ");
                scanf("%d",&c);
                switch(c)
                {
                    case 1 : system("cls");
                             strcpy(shift,"11am");
                             initial_seat_11am(cost,film,shift);
                             break;
                    case 2 : system("cls");
                             strcpy(shift,"2pm");
                             initial_seat_2pm(cost,film,shift);
                             break;
                    case 3:  system("cls");
                             strcpy(shift,"5pm");
                             initial_seat_5pm(cost,film,shift);
                             break;
                    case 4:  system("cls");
                             strcpy(shift,"8pm");
                             initial_seat_8pm(cost,film,shift);
                             break;
                    case 5:  system("cls");
                             strcpy(shift,"11pm");
                             initial_seat_11pm(cost,film,shift);
                             break;
                    default: printf("\nEnter 1-5 only");
                }
                break;
         case 4:system("cls");
                strcpy(film,"Mudhal nee mudivum nee");
                printf("%s",film);
                cost = 140;
                printf("\nCost per head = %d",cost);

                printf("\nSelect show timing :\n1. 11am\n2. 2 pm\n3. 5pm\n4. 8pm\n5. 11pm");
                printf("\nEnter your choice ");
                scanf("%d",&c);
                switch(c)
                {
                    case 1 : system("cls");
                             strcpy(shift,"11am");
                             initial_seat_11am(cost,film,shift);
                             break;
                    case 2 : system("cls");
                             strcpy(shift,"2pm");
                             initial_seat_2pm(cost,film,shift);
                             break;
                    case 3:  system("cls");
                             strcpy(shift,"5pm");
                             initial_seat_5pm(cost,film,shift);
                             break;
                    case 4:  system("cls");
                             strcpy(shift,"8pm");
                             initial_seat_8pm(cost,film,shift);
                             break;
                    case 5:  system("cls");
                             strcpy(shift,"11pm");
                             initial_seat_11pm(cost,film,shift);
                             break;
                    default: printf("\nEnter 1-5 only");
                }
                break;
        default: printf("\nEnter 1-4 only");
        system("pause");
        main();

}
}
