#include<stdio.h>
 int main(){
  int i,num,max=0,count=0,b=0;
  for(i=1;i<=10;i++)
      {
   scanf("%d",&num);
     if(num>max)
         {
      max=num;
      count++;}
     if(count>b){
      b=count;
     count=0;
      }
   printf("%d",b+1);
}

  return 0;
}
      

