#include<stdio.h>

int main(){
    int n;
    int a,b,c;

    printf("\t\t\tMenu\n");
    printf("1 add \n2 Multiply \n3 subtract \n4 divide\n");

    printf("Enter your choice = ");
    scanf("%d",&n);
    label:
   if (n>4)
   {
    printf("You enter the wrong number");
    goto end;
   }
   printf("Enter the first number = ");
   scanf("%d",&a);
   printf("ENter the second number = ");
   scanf("%d",&b);
 if (n==1)
 {
    printf("the sum is = %d",a+b);
 }
else if(n==2){
    printf("The Multiply is = %d",a*b);
}  
else if(n==3){
    printf("The Multiply is = %d",a-b);
} 
else if(n==4){
    printf("The Multiply is = %d",a/b);
} 
   end:
    return 0;
}