#include <stdio.h>
int main ()
{
	int a,b,c;
	printf("Enter your three numbers to find the largest among them: ");
	scanf("%d %d %d",&a,&b,&c);
	if (a>b){
		if (a>c){
			printf("%d is the greatest number \n",a);
		}
		}
	if (b>a){
		if (b>c){
			printf("%d is the greatest number \n",b);
		}
	}if (c>b){
		if (c>a){
			printf("%d is the greatest number \n",c);
	}
	}
	return 0;
}
