#include<stdio.h>
 int count(int x);
 void armstrong(int n);

 int main()
  {
    int num,y,coun=0;
     printf("enter num");
     scanf("%d",&num);
      armstrong(num);
       
  return 0;
  }

 int count(int x)
  {
    int coun=0;
     while(x>0)
      {
        x=x/10;
         coun++;
      }
    x=coun++;
    return x;
  }
   

 void armstrong(int n)
   {
     int m=0,rem,pro=1,sum=0,z=n;
        while(n>0)
         {
           rem=n%10;
            while(m<count(z))
             {
               pro=rem*pro;
                m++;
                 
                      
             }
              sum=pro+sum;
                m=0;
                 pro=1;
                  n=n/10;
          }
         printf("sum=%d",sum);
       
          if(sum==z)
           printf("armstrong\n");
          else
           printf("not armstrong\n");
      return ;
   }       
       


























































