#include<stdio.h>
int main()
{
 int x,y,z;

 printf("enter size of z:");
 scanf("%d",&z);

 printf("pattern up to %d rows is\n",z);
  for(x=1;x<=z;x++)
  {
   for(y=1;y<=x;y++)
   {
    printf("%d",y);
    }
    printf("\n");
    }
     return 0;
     }
