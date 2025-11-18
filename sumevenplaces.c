#include <stdio.h>
int main() {
	int a,n,s,c,a1,n1,c1;
	printf("Enter you number: ");
	scanf("%d",&n);
	n1=n;
	a=1;
	s=0;
	c=0;
	a1=1;
	c1=0;
	while(a1>=1){
		c1++;
		a1=n1%10;
		n1=n1/10;
	}	
	while (a>=1 && a1<1){
		c++;
		a = n%10;
		n=n/10;
		if (c1%2==0){
			if (c%2==0 && c>1){
				s=s+a;
			}
		}
		else{
			if(c%2!=0 && c>0){
				s=s+a;}
		}
	}
	printf("The sum of even digits in your number is: %d \n",s);
	return 0;

}
