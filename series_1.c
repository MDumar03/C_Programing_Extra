#include<stdio.h>
int main(){

int n,i,sum=0;

printf("Enter Ending point of series : ");
scanf("%d",&n);
printf("1+2+3+........+%d",n);

   for(i=1;i<=n;i++){
    sum=sum+i;
    }
printf("= %d",sum);


return 0;
}
