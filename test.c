#include <stdio.h>
void main(){
    int a,b;
    printf("Enter numbers: ");
    scanf("%d",&a);
    printf("enter coffee function: ");
    scanf("%d",&b);

    int Z,X,Y,G;
    Z = a + b;
    X = a * b;
    Y = a - b;
    G = a / b;

    printf("+ : %d\n", Z);
    printf("* : %d\n", X);
    printf("- : %d\n", Y);
    printf("/ : %d\n", G);
}