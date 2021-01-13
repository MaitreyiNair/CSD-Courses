#include <stdio.h>

void insertionSort(int RAN[], int size) {
  for (int step = 1; step < size; step++) {
    int key = RAN[step];
    int j = step - 1;


    while (key < RAN[j] && j >= 0) {
      RAN[j + 1] = RAN[j];
      --j;
    }
    RAN[j + 1] = key;
  }
}


int main()
{




  int RAN[20] = {104, 8, 17, 25, 44, 41, 52, 88, 91, 210, 1, 107, 99, 268, 310, 38, 5, 97, 23, 78};
  int size = sizeof(RAN) / sizeof(RAN[0]);
  insertionSort(RAN, size);
  printf("Sorted RAN in ascending order:\n");


  for (int i = 0; i < size; i++) {
    printf("%d ", RAN[i]);
  }
  printf("\n");
}


