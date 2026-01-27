#include <stdio.h>
int main()
{
	char a,b,c;
	printf("Enter your characters \n");
	scanf("%c %c",&a,&b);
	c=b;
	b=a;
	a=c;
	printf("%c",a);
	printf("%c\n",b);
	return 0;
}
