#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,n;
	double s;
	printf("Enter the values of a,b,n in (a+b)^n \n");
	scanf("%d %d %d",&a,&b,&n);
	s=pow((a+b),n);
	printf("The solution is %lf \n",s);
	return 0;
}
