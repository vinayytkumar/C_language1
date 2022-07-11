#include <stdio.h>

// function decleration
void reverse(int arr[], int n);
void print(int arr[], int n);

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    reverse(arr, 5);
    print(arr, 5);
    return 0;
}

// function data

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void reverse(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int firstvalue = arr[i];
        int secondvalue = arr[n - i - 1];
        arr[i] = secondvalue;
        arr[n - i - 1] = firstvalue;
    }
}