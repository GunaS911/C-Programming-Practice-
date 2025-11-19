#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter your numbers \n");
	scanf("%d %d",&a,&b);
	c=b;
	b=a;
	a=c;
	printf("%d ",a);
	printf("%d\n",b);
	return 0;
}
