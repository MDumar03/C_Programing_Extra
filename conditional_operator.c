#include<stdio.h>
int main(){

int num_1,num_2;
printf("Enter 2 number : ");
scanf("%d %d",&num_1,&num_2);

   int  large=num_1>num_2 ? num_1:num_2;  //Conditional Operational: (statement) ? (Number_1):(Number_2);
    printf("The Lage number is : %d",large);

return 0;
}
