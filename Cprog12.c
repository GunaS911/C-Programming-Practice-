#include <stdio.h>
int main()
{
	int c,n;
	int a = 1;
	int b =1;
	printf("Enter no of fibonacci numbers: ");
	scanf("%d",&n);
	for (int i =0;i<n;i++){
		printf("%d ",a);
		c=a+b;
		a=c-a;
		b=c;}
	return 0;
}

