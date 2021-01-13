#include <stdio.h>

void swap(int *a, int *b)
{
    int bill = *a;
    *a = *b;
    *b = bill;
}

int main()
{
    int p, q;
    printf("Enter Value of p");
    scanf("%d", &p);
    printf("\nEnter Value of q");
    scanf("%d", &q);
    swap(&p, &q);
    printf("\nNEW VALUES: p = %d, q = %d", p, q);
    return 0;
}

