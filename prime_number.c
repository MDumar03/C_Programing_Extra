#include<stdio.h>
int main(){

int i;
printf("Enter any number : ");
scanf("%d",&i);

    if(i%i==0 && i%1==0 && i%2!=0 && i%3!=0 && i%4!=0 && i%5!=0 && i%6!=0 && i%7!=0 && i%8!=0 && i%9!=0 && i%10!=0){
    printf("%d is a Prime Number",i);
    }

    else{
        printf("%d is not a Prime Number",i);
    }

return 0;
}
