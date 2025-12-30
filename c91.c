#include <stdio.h>
int main(){
	int n,fact;
	printf("Enter your number to find its factorial: \n");
	scanf("%d",&n);
	int *p,**pp;
	p = &fact;
	pp = &p;
	**pp = 1;
	while (n > 0){
		**pp = **pp * n;
		n--;
	}
	printf("Factorial is %d\n",fact);
	return 0;
}



