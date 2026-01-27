#include <stdio.h>
int main()
{
	double x,y;
	printf("Enter x: \n");
	scanf("%lf",&x);
	printf("Enter y: \n");
	scanf("%lf",&y);
	if (x>y){
		printf("x is greater than y\n");
	}
	else{
		printf("y is greater than x\n");
	}
	return 0;
}
