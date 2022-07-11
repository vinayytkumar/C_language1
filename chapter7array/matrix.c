#include <stdio.h>

int main()
{
    // 2x3

    int marks[2][3];
    printf("ente the marks = ");
    scanf("%d\t%d\t%d\n%d\t%d\t%d\t", &marks[0][0],&marks[0][1],&marks[0][2],&marks[1][0],&marks[1][1],&marks[1][2]);


    // marks[0][0] = 90;
    // marks[0][1] = 85;
    // marks[0][2] = 80;

    // marks[1][0] = 90;
    // marks[1][1] = 85;
    // marks[1][2] = 80;

    printf("%d\t%d\t%d\n%d\t%d\t%d\t", marks[0][0], marks[0][1], marks[0][2], marks[1][0], marks[1][1], marks[1][2]);
    return 0;
}