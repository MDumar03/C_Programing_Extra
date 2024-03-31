#include<stdio.h>
int main(){

int num,temp,r,sum=0;

printf("Enter any Number : ");
scanf("%d",&num);

temp=num;
while(temp!=0){
    r=temp%10;
    sum=sum*10+r;
     temp=temp/10;
}
   if(num==sum){
   printf("The given number %d . And this is a Pelindrome Number. Cause the reverse is : %d ",num,sum);  //if reverse and given number are same(it is called Palindrome number);
   }
   else{
    printf("The given number %d. And this is not a Pelindrome Number. Cause the reverse is : %d ",num,sum);
        }
return 0;
}
