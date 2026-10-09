#include <stdio.h>
 int main()
  {
  int a,b,m;

  printf("Enter size of m: ");
  scanf("%d", &m);
  printf("Square pattern of size %d is\n", m);
  for(a = 1; a<= m; a++)
   {
   for(b = 1; b <= m; b++)
    { printf("* ");
     }
      printf("\n");
       }
        return 0;
        }
