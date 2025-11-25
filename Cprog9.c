#include <stdio.h>
int main()
{
	int n;
	printf("Enter your number: ");
	scanf("%d",&n);
	int i =n-1;
	int a=0;
	while (i>1){
		if (n%i == 0){
			printf("Not prime \n");
			a=0;
			break;
		}
		else{
			a=1;
			i--;
		}
	}
	if(a==1){
		printf("It is a prime \n");
	}
	return 0;
}
		
