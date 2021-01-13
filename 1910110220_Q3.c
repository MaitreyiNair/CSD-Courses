#include <stdio.h>
int main()
{

    FILE *fp1;
    fp1 = fopen("/Users/maitreyinair/Desktop/lab_practice/DAT4.txt", "r");

    int numberArray[10];
    int i, j;

    printf("Reading the file... \n\n\n");


    for (i = 0; i < 10; i++)
    {

        fscanf(fp1, "%d", &numberArray[i]);

    }

    printf("Printing the values in the array \n\n");

    for (i = 0; i < 10; i++)
    {
        printf("%d ", numberArray[i]);
    }

    printf("\n\n");

    printf("Printing the values in the array in reverse order \n\n");

    for (i = 9; i >=0; i--)
    {
        printf("%d ", numberArray[i]);
    }

    fclose(fp1);

    return 0;

}
