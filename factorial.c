#include<stdio.h>
int main(){

int i,factorial=1,n;

printf("Enter Your Number : ");
scanf("%d",&n);


for(i=1;i<=n;i++){
factorial=factorial*i;
}
  printf("The Factorial of %d = %d \n",n,factorial);
return 0;
}
