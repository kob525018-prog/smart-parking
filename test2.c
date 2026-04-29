#include <stdio.h>

void main(){
    int name,surname,current_year,birth_year,age;
    printf("Enter name: ");
    scanf("%d",&name);
    printf("Enter surname: ");
    scanf("%d",&surname);
    printf("Enter current year: ");
    scanf("%d",&current_year);
    printf("Enter birth year: ");
    scanf("%d",&birth_year);
    age = current_year - birth_year;
    printf("My name is: %d\n", name );
    printf("%d\n", surname);
    printf("I am: %d\n", age);
}