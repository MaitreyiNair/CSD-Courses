#include <stdio.h>
int main()
{


 int RAN[20];
 int i, j;
 int bill;
 int count = 0;

printf("Enter elements in RANay: ");
    for(i=0; i<20; i++)
    {
        scanf("%d", &RAN[i]);
    }

    for(i=0; i<20; i++)
    {

        for(j=i+1; j<20; j++)
        {

            if(RAN[i] > RAN[j])
            {  count++;
                bill     = RAN[i];
                RAN[i] = RAN[j];
                RAN[j] = bill;
            }
        }
    }


    printf("\nElements of RAN in ascending order: ");
    for(i=0; i<20; i++)
    {
        printf("%d\t", RAN[i]);
    }
  printf("COUNT = %d",count);
    return 0;
}














