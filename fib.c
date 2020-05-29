#include<stdio.h>
void fibo(int);
int main()
{
 int number;
 scanf("%d",&number);
 fibo(number);
 printf("\n");
 return 0;
}
void fibo(int n)
{
 int i,a=0,b=1,c,temp;
 if(n==0)
  printf("0");
 else if(n==1)
  printf("1");
 else
 {
 for(i=0;i<=n;i++)
 {
   c=a+b;
   a=b;
   b=c;
   if (n<c)
   {
     printf("%d ",temp);
      n=n-temp;
      i=0;
      a=0;
      b=1;
   }
  else if(n==c)
   {
    printf("%d ",c);
    break;
   }
    else
    { temp=c;
    }
 } 
 }
   
}
