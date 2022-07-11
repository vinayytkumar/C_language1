#include <stdio.h>

// function return some value
int sum(int a, int b);
// function not return some value
void table(int b);

int main()
{
    int a, b, n;
    printf("Enter the first number = ");
    scanf("%d", &a);

    printf("Enter the second number = ");
    scanf("%d", &b);

    printf("the sum is = %d\n", sum(a, b));

    printf("Enter the number = ");
    scanf("%d", &n);

    table(n);
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}

void table(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", n * i);
    }
}