#include<stdio.h>
#include<stdlib.h>
initial_seat_11pm(int cost,char film[],char shift[])
{
    int i,j;
    FILE *fp;
    char c;
    fp=fopen("C:\\Users\\junai\\Desktop\\showtime5pm.txt","w");
    if(fp!=NULL)
        printf("\nSeats available\n");
    else
        printf("fail");
    for (i = 65; i < 74; i++)
    {
        for (j = 1; j < 10; j++)
        {
            fputc('0',fp);
        }
    }
    fclose(fp);
    printf("\t1\t2\t3\t4\t5\t6\t7\t8\t9\n");
    fp=fopen("C:\\Users\\junai\\Desktop\\showtime5pm.txt","r+");
    for (i = 65; !(feof(fp)), i < 74; i++)
    {
        switch(i)
        {
            case 65 :
            printf("\nA");
            break;

            case 66 :
            printf("\nB");
            break;

            case 67 :
            printf("\nC");
            break;

            case 68 :
            printf("\nD");
            break;

            case 69 :
            printf("\nE");
            break;

            case 70 :
            printf("\nF");
            break;

            case 71 :
            printf("\nG");
            break;

            case 72 :
            printf("\nH");
            break;

            case 73 :
            printf("\nI");
            break;
        }

            for (j = 49; j < 49+9; j++)
            {
                c = fgetc(fp);
                printf("\t%c",c);
            }
            printf("\n");
        }
        fclose(fp);
        ticket_booking(cost,film,shift);
}
