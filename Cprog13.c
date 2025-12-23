#include <stdio.h>
int fibo(int n);
int loop(int n);
int main()
{
	int n;
	printf("Enter no  of fibonacci numbers: ");
	scanf("%d",&n);
	loop(n);
	return 0;
}
int fibo(int n){
	if (n==0){
		return 0;
	}
	else if (n==1){
		return 1;
	}
	else{
		return fibo(n-1)+fibo(n-2);
	}
}
int loop (int n){
	if (n>0){
		printf("%d ",fibo(n));
		n--;
		loop(n);
	}
}
