#include <stdio.h>
int main()
{
	int n,a;
	int s=0;
	int f =1;
	printf("Enter your number: ");
	scanf("%d",&n);
	int b=n;
	while (n>0){
		a=n%10;
		int f=1;
		for(int i=1;i<a+1;i++){
			f=f*i;}
		s=s+f;
		n=n/10;
	}
	if (s==b){
		printf("%d is a strong number\n",b);
	}
	else{
		printf("%d is not a strong number\n",b);
	}
	return 0;
}


