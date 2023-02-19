#include<stdio.h>
#include<stdlib.h>
#include<string.h>
ticket_booking(int cost,char film[],char shift[])
{

    int n;
    char y_or_no;
    printf("\nEnter the number of tickets\n");
    scanf("%d",&n);
    if(n>90)
    {
       printf("Oops, Only 90 seats available\nYou cannot book more than 90 tickets");
        exit(0);
    }
    system("cls");
    printf("\nShift : %s\nSeats Booked and Available : \n(1 - booked\n0 - available)\n",shift);  //0 means available seats
                                                                                          //1 means booked seats
    int seat[10][9];
    int i, j;
    printf("\t1\t2\t3\t4\t5\t6\t7\t8\t9\n");
    if(n<=9)
    {

    for (i = 0; i < 10; i++)
    {
        switch(i)
        {
            case 0 :
            printf("\nA");
            break;

            case 1 :
            printf("\nB");
            break;

            case 2 :
            printf("\nC");
            break;

            case 3 :
            printf("\nD");
            break;

            case 4 :
            printf("\nE");
            break;

            case 5 :
            printf("\nF");
            break;

            case 6 :
            printf("\nG");
            break;

            case 7 :
            printf("\nH");
            break;

            case 8 :
            printf("\nI");
            break;

            case 9 :
            printf("\nJ");
            break;

        }

        for (j = 0; j < 9; j++)
        {
            seat[i][j] = 0;
            for(int k=0;k<(n);k++)
                {
                seat[0][k] = 1;

                }
            printf("\t");
            printf("%d",seat[i][j]);
        }
    }
    }
    else if(n>9&&n<=90)
    {
        int l,m;
        for(l=0;l<10;l++)
            {
            for(m=0;m<9;m++)
            {
                seat[l][m]=0;
            }
            }
        for (i = 0; i < 10; i++)
        {
        switch(i)
        {
            case 0 :
            printf("\nA");
            break;

            case 1 :
            printf("\nB");
            break;

            case 2 :
            printf("\nC");
            break;

            case 3 :
            printf("\nD");
            break;

            case 4 :
            printf("\nE");
            break;

            case 5 :
            printf("\nF");
            break;

            case 6 :
            printf("\nG");
            break;

            case 7 :
            printf("\nH");
            break;

            case 8 :
            printf("\nI");
            break;

            case 9 :
            printf("\nJ");
            break;

        }

        for (j = 0; j < 9; j++)
        {
            seat[0][j] = 1;
            int k;

            if(n<=18)
                {
                    for(k=0;k<(n-9);k++)
                    {
                          seat[1][k] = 1;
                    }

                }
                        if( n<=27 && n>18)
                            {
                                for(k=0;k<(n-18);k++)
                                    {
                                        seat[1][j]=1;
                                        seat[2][k] = 1;
                                    }

                            }

                        if(n<=36 && n>27)
                            {
                                for(k=0;k<(n-27);k++)
                                {
                                    seat[1][j]=1;
                                    seat[2][j]=1;
                                    seat[3][k] = 1;
                                }

                            }

                        if(n<=45 && n>36)
                            {
                                for(k=0;k<(n-36);k++)
                                {
                                    seat[1][j]=1;
                                    seat[2][j]=1;
                                    seat[3][j]=1;
                                    seat[4][k] = 1;
                                }

                            }


                            if(n<=54 && n>45)
                                {
                                    for(k=0;k<(n-45);k++)
                                    {
                                        seat[1][j]=1;
                                        seat[2][j]=1;
                                        seat[3][j]=1;
                                        seat[4][j]=1;
                                        seat[5][k] = 1;
                                    }

                                }


                        if(n<=63 && n>54)
                            {
                                for(k=0;k<(n-54);k++)
                                {
                                    seat[1][j]=1;
                                    seat[2][j]=1;
                                    seat[3][j]=1;
                                    seat[4][j]=1;
                                    seat[5][j]=1;
                                    seat[6][k] = 1;
                                }

                            }


                        if(n<=72 && n>63)
                            {
                                for(k=0;k<(n-63);k++)
                                {
                                    seat[1][j]=1;
                                    seat[2][j]=1;
                                    seat[3][j]=1;
                                    seat[4][j]=1;
                                    seat[5][j]=1;
                                    seat[6][j]=1;
                                    seat[7][k] = 1;
                                }

                            }


                            if(n<=81 && n>72)
                                {
                                    for(k=0;k<(n-72);k++)
                                    {
                                        seat[1][j]=1;
                                        seat[2][j]=1;
                                        seat[3][j]=1;
                                        seat[4][j]=1;
                                        seat[5][j]=1;
                                        seat[6][j]=1;
                                        seat[7][j]=1;
                                        seat[8][k] = 1;
                                    }

                                }

                                    if(n<=90 && n>81)
                                        {
                                            for(k=0;k<(n-81);k++)
                                            {
                                                seat[1][j]=1;
                                                seat[2][j]=1;
                                                seat[3][j]=1;
                                                seat[4][j]=1;
                                                seat[5][j]=1;
                                                seat[6][j]=1;
                                                seat[7][j]=1;
                                                seat[8][j]=1;
                                                seat[9][k] = 1;
                                            }

                                        }


                            printf("\t");
                            printf("%d",seat[i][j]);
                    }

            }
    }


    printf("\nYour booking is confirmed \nNo of tickets : %d\n",n);

    printf("\nGo to payment page(y/n) : ");
    scanf(" %c",&y_or_no);
    if(y_or_no=='Y'||y_or_no=='y')
    {
        payment_details(n,cost,film,shift);
    }
    else if(y_or_no=='N'||y_or_no=='n')
    {
        ticket_booking(cost,film,shift);
    }
    else
    {
        printf("\n\nEnter either y or n");
        ticket_booking(cost,film,shift);

    }
}
