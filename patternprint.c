#include <stdio.h>
int main () {
	int n,i;
	printf("Enter the number of rows you want of pattern printing ");
	scanf("%d",&n);
	while (n>=0){
		i=0;
		while (i<n){
			printf("*");
			i++;
	}
	printf("\n");
	n--;
	}
	return 0;
}
