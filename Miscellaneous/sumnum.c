#include <stdio.h>
int main(){
	int n,i,s;
	s=0;
	printf("Enter the number to find the sum of its digits: ");
	scanf("%d",&i);
	n=1;
	while(n>=1){
		n = i%10;
		i=i/10;
		s=n+s;
	}
	printf("The sum of the digits of the given number is: %d \n",s);
	return 0;
}
