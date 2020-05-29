/*
enter the limit
5
8
2
4
3
0

the numbers are
8 2 3 0 
*/
#include<stdio.h>
int main()
{
 int n,array[30],i,j,max,a=0,b=1,c;
 printf("\nenter the limit\n");
 scanf("%d",&n);
 for(i=0;i<n;i++)
  scanf("%d",&array[i]);
 max=array[0];
 for(i=1;i<n;i++)
 {if(array[i]>max)
   max=array[i];
 }
 printf("\nthe numbers are\n");
 for(i=0;i<n;i++)
 {
   if(a==array[i])
    printf("%d ",array[i]);
      
  else if(b==array[i])
     printf("%d ",array[i]);
 else
 {  
  for(j=0;j<=100;j++)
  {
   c=a+b;
   a=b;
   b=c;
  if(c==array[i])
    printf("%d ",array[i]);
   if(c>=max)
     break;
 }
 a=0;
 b=1;}
 }
 printf("\n");
 return 0;
}
