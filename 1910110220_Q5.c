#include <stdio.h>
int main()
{

    FILE *fp1;
    fp1 = fopen("/Users/maitreyinair/Desktop/lab_practice/DAT5.txt", "r");

    int numBETA[36];
    int i, j;
    int count = 0;

    printf("Reading the file... \n\n\n");


    for (i = 0; i < 36; i++)
    {

        fscanf(fp1, "%d", &numBETA[i]);

    }

    printf("Printing the values in the array \n\n");

    for (i = 0; i < 36; i++)
    {
        if (numBETA[i] == 97)
            break;
    }
        if (i<36)
            printf("97 Was found at %d position", i);
        else
            printf("97 Element not found");


    printf("\n\n\n\n");

     for (i = 0; i < 36; i++)
    {
        if (numBETA[i] == 66)
            break;

    }
        if (i<36)
            printf("66 Was found at %d position\n\n\n", i);
        else
            printf("Element not found");


    printf("\n\n\n\n");

    for (i = 0; i < 36; i++)
    {
        if (numBETA[i] == 99)
            break;

    }
        if (i<36)
            printf("99 Was found at %d position\n\n\n", i);
        else
            printf("99 Element not found");


    printf("\n\n\n\n");

for (i = 0; i < 36; i++)
    {
        if (numBETA[i] == 34)
            break;

    }
        if (i<36)
            printf("34 Was found at %d position\n\n\n", i);
        else
            printf("Element not found");



    printf("\n\n\n\n");



    for (i = 0; i < 36; i++)
    {
        if (numBETA[i] == 54)
            break;

    }
        if (i<36)
            printf("54 Was found at %d position\n\n\n", i);
        else
            printf("Element not found");

    printf("\n\n\n\n");

     for (i = 0; i < 36; i++)
    {
        if (numBETA[i] == 24)
            break;

    }
        if (i<36)
            printf("24 Was found at %d position\n\n\n", i);
        else
            printf("Element not found");

     printf("\n\n\n\n");

        for (i = 0; i < 36; i++)
    {
        if (numBETA[i] == 73)
            break;

    }
        if (i<36)
            printf("73 Was found at %d position\n\n\n", i);
        else
            printf("73 Element not found");


    fclose(fp1);

    return 0;

}
