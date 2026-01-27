#include <stdio.h>
#include <math.h>
int main()
{
	int n,a;
	int s=0;
	printf("Enter your number: ");
	scanf("%d",&n);
	int b =n;
	while (n>0){
		a = pow(n%10,3);
		n=n/10;
		s=s+a;
	}
	if (s==b){
		printf("%d is a Armstrong number\n",b);
	}
	else{
		printf("%d is not a Armstrong number\n",b);
	}
	return 0;
}
