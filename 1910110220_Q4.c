#include <stdio.h>
int main()
{

    FILE *fp1;
    fp1 = fopen("/Users/maitreyinair/Desktop/lab_practice/DAT4.txt", "r");

    int numberArray[10];
    int i, j;
    int count = 0;

    printf("Reading the file... \n\n\n");


    for (i = 0; i < 10; i++)
    {

        fscanf(fp1, "%d", &numberArray[i]);

    }

    printf("Printing the values in the array \n\n");

    for (i = 1; i < 10; i++)
    {
        numberArray[i-1] = numberArray[i];
        printf("%d ", numberArray[i]);
        count++;
    }

     numberArray[9] = 0;
     printf("%d ", numberArray[9]);

    printf("\n\n\n\n");
    printf("%d", count);



    fclose(fp1);

    return 0;

}
