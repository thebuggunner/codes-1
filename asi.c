//take four digit from the user and reverse their order
#include<stdio.h>
int main (){
   int num,x;
x=0;
  scanf("%d",&num);
   while(num>0){
    x=x*10 + num%10;
    num=num/10;
   }

printf("Reverse is %d",x );
return 0 ;
}
