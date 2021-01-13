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



 int first = 0;
  int last = 35;
  int middle = (first+last)/2;

  do
    {

    if (numBETA[middle] < 97)
      first = middle + 1;
    else if (numBETA[middle] == 97)
    {
      printf("%d found at location %d.\n", 97, middle+1);
      break;
    }

  else
      last = middle - 1;

    middle = (first + last)/2;
    }while(first <= last);

  if (first > last)
    printf("Not found! %d isn't present in the list.\n", 97);

  return 0;

   do
    {

    if (numBETA[middle] < 66)
      first = middle + 1;
    else if (numBETA[middle] == 66)
    {
      printf("%d found at location %d.\n", 66, middle+1);
      break;
    }

  else
      last = middle - 1;

    middle = (first + last)/2;
    }while(first <= last);

  if (first > last)
    printf("Not found! %d isn't present in the list.\n", 66);

  return 0;

     fclose(fp1);

    return 0;


   do
    {

    if (numBETA[middle] < 54)
      first = middle + 1;
    else if (numBETA[middle] == 54)
    {
      printf("%d found at location %d.\n", 54, middle+1);
      break;
    }

  else
      last = middle - 1;

    middle = (first + last)/2;
    }while(first <= last);

  if (first > last)
    printf("Not found! %d isn't present in the list.\n", 54);

  return 0;

     fclose(fp1);

    return 0;


   do
    {

    if (numBETA[middle] < 73)
      first = middle + 1;
    else if (numBETA[middle] == 73)
    {
      printf("%d found at location %d.\n", 73, middle+1);
      break;
    }

  else
      last = middle - 1;

    middle = (first + last)/2;
    }while(first <= last);

  if (first > last)
    printf("Not found! %d isn't present in the list.\n", 73);

  return 0;

     fclose(fp1);

    return 0;

}
