#include<stdio.h>
int main(){

int year;
printf("ENTER ANY YEAR  : ");
scanf("%d",&year);

if(year%400==0){
   printf("LEAP YEAR");
    }
else if(year%4==0 && year%100!=0){
    printf("LEAP YEAR");
    }
else{
     printf("Not a Leap Year");
  }

return 0;
}

/*
float num;
printf("Enter any number : ");
scanf("%f",&num);
printf("Root value of %.2f is: %.2f",num,sqrt(num));
*/
