#include<stdio.h>
int main(){
int i,num;

printf("Enter Any Number: ");
scanf("%d",&num);

for(i=1;i<11;i++){
    printf("%d X %d = %d\n",num,i,num*i);
}

return 0;
}
