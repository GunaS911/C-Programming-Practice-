#include <stdio.h>
int main()
{
	int n,a;
	int s=0;
	printf("Enter your number: ");
	scanf("%d",&n);
	while (n>0){
		a=n%10;
		n=n/10;
		s=s+a;
	}
	printf("%d\n",s);
	return 0;
}
