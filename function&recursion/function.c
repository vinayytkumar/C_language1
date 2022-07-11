#include <stdio.h>

// the function eturn some value

float rectangle(float a,float b);

int main (){
float a = 5.0;
float b = 10.0;

printf("the area is = %f",rectangle(a,b));

    return 0;
}

float rectangle ( float a,float b){
    return a*b;
}