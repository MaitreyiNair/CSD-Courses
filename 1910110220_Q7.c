#include <stdio.h>
int main()
{

    FILE *fp1;
    fp1 = fopen("/Users/maitreyinair/Desktop/lab_practice/DAT5.txt", "r");

    int numberArray[36];
    int i, j;

    printf("Reading the file... \n\n\n");


    for (i = 0; i < 36; i++)
    {

        fscanf(fp1, "%d", &numberArray[i]);

    }

    printf("Printing the values in the array \n\n");

    for (i = 0; i < 36; i++)
    {
        printf("StudentID= %d\n\n\n\n ", numberArray[i]);
        for (j = 1; j <6; j++)
        {
            printf("Subject %d = 0",j);
        }
    }

    printf("\n\n");

    return 0;

}
