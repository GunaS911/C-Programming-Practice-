#include <stdio.h>
int main() {
	int a,n,s,c;
	printf("Enter you number: ");
	scanf("%d",&n);
	a=1;
	s=0;
	while (a>=1){
		a = n%10;
		n=n/10;
		if (a%2==0){
			s=s+a;
		}
	}
	printf("The sum of even digits in your number is: %d \n",s);
	return 0;

}


