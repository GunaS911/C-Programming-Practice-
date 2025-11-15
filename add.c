#include <stdio.h>
int main()
{
	double x,y,z;
	printf("Enter your x value to add ");
	scanf("%lf",&x);
	printf("Enter your y value to add ");
	scanf("%lf",&y);
	z = x+y;
	printf("Your required sum is %lf \n",z);
	return 0;
}
