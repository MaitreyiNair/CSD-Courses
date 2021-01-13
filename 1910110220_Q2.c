#include <stdio.h>

void swap1(int *a, int *b)
{

    *a = *b;

}

void swap2(int *a, int *b)
{

    *b = *a;
}

int main()
{
    int p, q;
    printf("Enter Value of p");
    scanf("%d", &p);
    printf("\nEnter Value of q");
    scanf("%d", &q);
    swap1(&p, &q);
    swap2(&p, &q);
    printf("\nNEW VALUES: p = %d, q = %d", p, q);
    return 0;
}
