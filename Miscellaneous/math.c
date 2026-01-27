#include <stdio.h>
int main()
{
	double a,b,div;
	int sum,mul,sub;
	printf("Enter your numbers\n");
	scanf("%lf %lf",&a,&b);
	sub = a-b;
	sum=a+b;
	div=a/b;
	mul=a*b;
	printf("Sum %d \n" ,sum);
	printf("Product %d \n" ,mul);
	printf("Difference %d \n" ,sub);
	printf("Division %lf \n" ,div);
	return 0;
}
	
