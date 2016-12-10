#include <stdio.h>

int main(void) {
	// your code goes here
	int n,i,m=1;
	scanf("%d",&n);
	if(n>1)
	{
  for(i=1;i<=n;i++)
     m=m*i;
    printf("%d",m);
	}
	else
	{
	    printf("Enter the valid input");
	}
	return 0;
}

