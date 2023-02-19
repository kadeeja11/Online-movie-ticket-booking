#include <stdio.h>
#include <stdlib.h>

int admins_now_showing()
{   int i,n;
    char data[1000];
    /* Variable to store user content */

    /* File pointer to hold reference to our file */
    FILE * fPtr;


    /*
     * Open file in w (write) mode.
     * "data/file1.txt" is complete path to create file
     */
    printf("\n -------------------------------------------------------------------------------------------------\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\n                                  WELCOME TO TRINITY THEATRE(Admin's Page)                               \n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\n--------------------------------------------------------------------------------------------------\n");
    printf("Enter how many movies you want to insert\n");
    scanf("%d",&n);

    fPtr = fopen("C:\\Users\\junai\\Desktop\\new-file-latest.txt", "a");


    /* fopen() return NULL if last operation was unsuccessful */
    if(fPtr == NULL)
    {
        /* File not created hence exit */
        printf("Unable to create file.\n");
        exit(EXIT_FAILURE);
    }



    /* Input contents from user to store in file */
    printf("Enter contents to store in file : \n");
    while(n>=0)
    {
    fgets(data, sizeof(data), stdin);
    n--;

    /* Write data to file */
    fputs(data, fPtr);
    }
    /* Close file to save file data */
    fclose(fPtr);


    /* Success message */
    printf("File created and saved successfully. :) \n");


    return 0;
}

