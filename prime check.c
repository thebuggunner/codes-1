#include <stdio.h>
 void prime(int n);
 
 int main()
  {
   int num;
    printf("give num");
     scanf("%d",&num);
       if (num==0||num<0)
        {
         printf("INVALID INPUT");
           scanf("%d",&num);
        }
            prime(num);
   return 0;
  }
 void prime(int n)
  {
   int i,count=0;
      for (i=2;i<=n-1;i++)
        {
          if (n%i==0)
           {
             printf("factors are");
              printf("%d\n",i);
                count++;
           }
          else
            continue;
        }
      if(count>=1)
       {
          printf("not prime\n");
         
       }
      else
        printf("prime");
  }
