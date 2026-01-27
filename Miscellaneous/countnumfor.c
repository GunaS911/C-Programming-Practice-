#include <stdio.h>
int main(){
	int n;
	printf("Enter your number to count: ");
	scanf("%d",&n);
	for (n>=0;n--;){
		printf("%d \n",n);
	}
	return 0;
}
