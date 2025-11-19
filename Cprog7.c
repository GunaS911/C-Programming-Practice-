#include <stdio.h>
int main()
{
	int a,n;
	double s;
	printf("Enter the number to find the factorial: ");
	scanf("%d",&a);
	s=1;
	n=a;
	while (a>=1){
		s=s*a;
		a--;}
	if (a==0){	
		printf("The factorial of %d is %lf \n",n,s);
	}
	return 0;
}
		 
