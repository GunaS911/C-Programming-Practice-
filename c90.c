#include <stdio.h>
int lcm (int a,int b,int c);
int main()
{
	int a,b,c;
	printf("Enter your numbers to find their lcm\n");
	scanf("%d %d",&a,&b);
	if (a>b){
		 c = a;
	}
	else{
		c = b;}
	printf("The lcm of %d and %d is %d\n",a,b,lcm(a,b,c));
	return 0;
}
int lcm(int a,int b,int c){
	if (c%a ==0 && c%b == 0){
	       return c;}
	return lcm(a,b,c+1);
}
