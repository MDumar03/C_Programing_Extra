#include<stdio.h>
int main(){

int n_1,n_2,a=1,b=2,sum;

printf("Enter Ending Point of the series : ");
scanf("%d %d",&n_1,&n_2);

printf("1.2+2.3+3.4+......+%d.%d",n_1,n_2);


  while(a<=n_1 && b<=n_2){
    sum=sum+a*b;
    a=a+1;
    b=b+1;
  }
  printf("= %d",sum);

return 0;
}
