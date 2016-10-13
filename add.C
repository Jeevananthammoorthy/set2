#include <stdio.h>

int main(void) {
      int sum=0,odd=0,i;
      for(i=1;i<=15;i++)
      sum+=i;
      printf("%d\n",sum);
      for(i=15;i<=45;i++)
      {
      if(i%2!=0)
      odd+=i;
      }
      printf("%d",odd);
	return 0;
}

