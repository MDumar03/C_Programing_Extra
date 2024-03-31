#include<stdio.h>
int main(){
char lower,upper;

printf("Enter any  lowercase letter: ");
scanf("%c",&lower);

upper=toupper(lower);// it is also possible to do same b y using tolower.
printf("The Uppercase of letter %c is: %c",lower,upper);

return 0;
}
