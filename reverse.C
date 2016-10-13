#include <stdio.h>

int main(void) {
      int n,rev=0,add;
      scanf("%d",&n);
      while(n!=0)
      {
          add=n%10;
          rev=(rev*10)+add;
          n=n/10;
          
      }
      printf("%d",rev);
	return 0;
}
