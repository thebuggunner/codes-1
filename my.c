#include<stdio.h>
  int main (){
   int a,b,c,n,i;
    a=0,b=1;
   scanf("%d",&n);
    printf("%d\n%d\n",a,b);
   for(i=1;i<=n;i++)
     {
    c=a+b;
    printf("%d\n",c);
    a=b;
    b=c;   
     
     }
  
return 0;
}
