#include<stdio.h>
int main(){

float num_1,num_2;
char sym;

printf("Chose any operation (+,-,*,/) :");
scanf("%c",&sym);

printf("Enter 2 numbers : ");
scanf("%f %f",&num_1,&num_2);

switch(sym)
     {
          case '+':
              {
                     printf("%f + %f= %f",num_1,num_2,num_1+num_2);
                     break;
          }

        case  '-' :
            {
                     printf("%f - %f= %f",num_1,num_2,num_1-num_2);
                     break;
          }

           case  '*' :
               {
                     printf("%f X %f= %f",num_1,num_2,num_1*num_2);
                     break;
          }

           case  '/' :
               {
                     printf("%f / %f= %f",num_1,num_2,num_1/num_2);
                     break;
          }
          default :
              {
                      printf("Not valid anything");
                 }

          }
}
