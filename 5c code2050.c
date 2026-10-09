#include<stdio.h>
int main()
{
 int i,j,p;

 printf("enter size of p:");
 scanf("%d",&p);

 printf("pattern up to %d rows is\n",p);

 for(i=1;i<=p;i++)
 {
  for(j=1;j<=i;j++)
  {
   printf("* ");
  }
  printf("\n");
 }

  return 0;
  }
