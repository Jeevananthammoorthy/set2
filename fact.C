#include <stdio.h>

int main(void) {
      int num=1,fact;
      scanf("%d",&fact);
      if(fact>0)
      {
      while(fact>1)
      {
          num=num*fact;
          fact--;
      }
      printf("%d",num);
      }
      else
      {
          printf("Enter valid input");
      }
      
	return 0;
}

