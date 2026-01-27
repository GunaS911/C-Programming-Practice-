#include <stdio.h>
int main(){
	int a,b;
	int *p,*pp;
	printf("Enter your numbers a and b: \n");
	scanf("%d %d",&a,&b);
	p = &a;
	pp = &b;
	*p = *pp + *p;
	*pp = *p - *pp;
	*p = *p - *pp;
	printf("The numbers a = %d and b = %d successfully swaped \n",a,b);
	return 0;
}
