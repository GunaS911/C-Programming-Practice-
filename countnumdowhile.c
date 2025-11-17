#include <stdio.h>
int main (){
	int i;
	printf("Enter the number to count: ");
	scanf("%d",&i);
	do {
		printf("%d \n",i);
		i--;
	}
	while (i>=0);
	return 0;
}
