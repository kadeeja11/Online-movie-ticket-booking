#include <stdio.h>
#include <stdlib.h>
#include<string.h>


void users_now_showing();
void upcoming_movies();
void initial_seat_11am(int cost,char film[25],char shift[10]);
void initial_seat_2pm(int cost,char film[25],char shift[10]);
void initial_seat_5pm(int cost,char film[25],char shift[10]);
void initial_seat_8pm(int cost,char film[25],char shift[10]);
void initial_seat_11pm(int cost,char film[25],char shift[10]);
void ticket_booking(int cost,char film[25],char shift[10]);
void payment_details(int n,int cost,char film[25],char shift[10]);
void booking_details(char name[25],long long int mob_no,char film[25],char shift[10],int n,int cost);
void cancel_tickets(int mob_no, char name[25],int total);


int main()
{
    int cho;
    system("cls");
    printf("\n -------------------------------------------------------------------------------------------------\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\n                                        WELCOME TO TRINITY THEATRE                                \n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\n--------------------------------------------------------------------------------------------------\n");
    printf("\n\n\n1.BOOK TICKET");
    printf("\n\n\n2.UPCOMING MOVIES");
    printf("\n\n\n3.EXIT");


    printf("\n\n\nEnter your choice ");
    scanf("%d",&cho);
    switch(cho)
    {
       case 1 : users_now_showing();
                break;
       case 2 : upcoming_movies();
                break;
       case 3 : exit(0);
                break;
       default : printf("\nEnter 1-3 only");
    }
    return 0;

 }
