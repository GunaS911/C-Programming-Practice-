#include <stdio.h>
int powq(int a,int b);
int powq(int a,int b){
	int p = 1;
	if (b > 1){
		p = a*p;
		b--;
		return p * powq(a,b);
	}
}
int main()
{
	int a,b;
	printf("Enter a and b in pow(a,b) : ");
	scanf("%d %d",&a,&b);
	printf("pow(%d,%d) is %d",a,b,powq(a,b));
	return 0;
}

	
