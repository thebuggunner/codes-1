#include<stdio.h>
/*function declaration*/
 int getnum();
 int square(int x); 
 void printresult(int b);

/*main function*/

  int main(){
    int a,b;
  printf("iser has to give the value of a");
    a=getnum();
    b=square(a);
    printresult(b);
  return 0;
    }

/*function definitions*/
 
 int getnum()
    {
   int n;
   scanf("%d",&n);
   return n;
    }
 
 int square(int h)
    {
   return h*h;
    }
   
 void printresult(int j)
      {
    printf("%d\n",j);
    return ;
       }
