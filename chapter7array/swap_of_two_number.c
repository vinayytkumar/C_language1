#include <stdio.h>

void swap(int *, int *);

int main()
{
    int a, b;
    printf("Enter the two number = ");
    scanf("%d %d", &a, &b);

    swap(&a, &b);
    printf("first number is = %d\n",a);
    printf("second number is = %d\n",b);

    return 0;
}
void swap(int *x, int *y)
{
    int z;
    z = *x;
    *x = *y;
    *y = z;
}
