#include <stdio.h>
int gcd(int a, int b , int c);
int main()
{
	int a,b,c;
	printf("Enter your numbers to find their gcd\n");
	scanf("%d %d",&a,&b);
	if (a>b){
		 c = a;
	}
	else{
		c = b;}
	printf("The gcd of %d and %d is %d\n",a,b,gcd(a,b,c));
	return 0;
}
int gcd(int a, int b,int c){
	if (a%c == 0 && b%c==0){
		return c;
	}
	return gcd(a,b,c-1);
}
