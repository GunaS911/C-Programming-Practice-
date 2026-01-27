#include <stdio.h>
int main()
{
	double s,u,t,a;
	printf("Enter u,a,t: : \n");
	scanf("%lf %lf %lf",&u,&a,&t);
	s = u*t + 0.5*(a*t*t);
	printf("The soln of the arithmetic equation is %lf \n",s);
	return 0;
}
