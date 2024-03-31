#include<stdio.h>
int main(){

int i,sum=0,count=0;

for(i=1;i<=100;i++){

     if(i%i==0 && i%1==0 && i%2!=0 && i%3!=0 && i%4!=0 && i%5!=0 && i%6!=0 && i%7!=0 && i%8!=0 && i%9!=0 && i%10!=0){
             count=count+i;
          }
    else{
                continue;
                }
            }

printf("%d\n",count);
return 0;
}
