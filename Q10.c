#include <stdio.h>
int main()
{


 int RAN[20] = {1, 5, 8, 17, 23, 25, 38, 41, 44, 52, 78, 88, 91, 97, 99, 104, 107, 210, 268, 310};
 int i, j;
 int bill;
 int count = 0;


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













