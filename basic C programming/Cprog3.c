#include <stdio.h>
int main() {
	float x;
	int y;
	printf("Enter your number: ");
	scanf("%f",&x);
	y=x;
	if (x/2 == y/2){
		printf("Its an Even number \n");
	}
	else{
		printf("Its an Odd number \n");
	}

}   

