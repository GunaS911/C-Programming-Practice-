#include <stdio.h>
#include <math.h>
int main()
{
	double a,b,c,d,x,y;
	printf("Enter a,b,c of the aritmetic equatoin ax^2+bx+c=0 \n");
	scanf("%lf %lf %lf",&a,&b,&c);
	d=b*b - (4*a*c);
	x= (-b + sqrt(d))/(2*a);
	y= (-b - sqrt(d))/(2*a);
	printf("The solution of your arithmetic equation are %lf",x);
	printf(" and %lf \n",y);
return 0;
}

