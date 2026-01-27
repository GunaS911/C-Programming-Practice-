#include <stdio.h>
#include <stdbool.h>
int main()
{
	int n,a,b,s=0;
	printf("Enter your number: ");
	scanf("%d",&n);
	b=n;
	while(true){
		a=n%10;
		n=n/10;
		s=s*10+a;
		if (n==0){
			break;}
	}
	if (s==b){
		printf("It is a palindrome\n");
	}
	else{
		printf("It is not a palindrome\n");
	}
	return 0;
}
