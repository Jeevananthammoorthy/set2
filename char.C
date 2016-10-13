#include <stdio.h>
#include<ctype.h>
int main(void) {
      char a[20];
      int n,digit,alnum,alpha,c,i;
      alpha=alnum=digit=0;
       gets(a);
      n=strlen(a);
      printf("%d\n",n);
      for(i=0;i<n;i++)
      {
          if(isalpha(a[i]))
              alpha++;
              else if(isdigit(a[i]))
              digit++;
              else if(isalnum(a[i]))
              alnum++;
              else
              c=0;
      }
      printf("alphanumberic=%d digits=%dcharacter=%d",alnum,digit,alpha);
	return 0;
}
