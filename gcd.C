#include <stdio.h>

int main(void) {
	int n1,n2;
	scanf("%d",&n1);
	scanf("%d",&n2);
	n1=(n1>0)?n1:-n1;
	n2=(n2>0)?n2:-n2;
	while(n1!=n2)
	{
	    if(n1>n2)
	    n1-=n2;
	    else
	    n2-=n1;
	}
	printf("%d",n1);
	return 0;
}
