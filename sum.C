#include <stdio.h>

int main(void) {
      int sum=0,n;
      scanf("%d",&n);
      while(n>0)
      {
          sum=sum+n;
          n--;
      }
      printf("%d",sum);
	return 0;
}

