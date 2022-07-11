#include <stdio.h>

void printHW(int count);

int main()
{
    int n;
    printf("Enter the number of print = ");
    scanf("%d", &n);
    printHW(n);
    return 0;
}

void printHW(int count)
{
    if (count == 0)
    {
        return;
    }
    printf("Shubham\n");
    printHW(count - 1);
}