#include<stdio.h>
int main(){

int a=20;
int b=30;
int temporary;

temporary=a;
a=b;
b=temporary;

printf("a= %d\n",a);
printf("b=%d",b);

return 0;
}
