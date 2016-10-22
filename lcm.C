#include <stdio.h>

int main(void) {
	int n1,n2,t1=0,t2=0;
	scanf("%d",&n1);
	scanf("%d",&n2);
	t1=n1;
	t2=n2;
	n1=(n1>0)?n1:-n1;
	n2=(n2>0)?n2:-n2;
	while(n1!=n2)
	{
	    if(n1>n2)
	    n1-=n2;
	    else
	    n2-=n1;
	}
	printf("gcd=%d",n1);
	n1=t1/n1;
	t2=t2*n1;
	printf("\n%d",t2);
	
	return 0;
}


