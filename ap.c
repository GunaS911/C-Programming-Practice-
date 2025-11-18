#include <stdio.h>
int main(){
	int a,n,d;
	printf("\n Enter the first term of the ap: ");
	scanf("%d",&a);
	printf("\n Enter the difference in the ap: ");
	scanf("%d",&d);
	printf("\n Enter the number of terms in your ap: ");
	scanf("%d",&n);
	int i =n;
	/*with for loop */
	for (n>=0;n--;){
		int s = a+n*d;
		printf("%d,",s);
	}
	/*with while loop*/
	n=0;
	while(n<i){
		printf("\n %d",a+n*d);
		n++;}
	return 0;
}
