#include <stdio.h>
int main()
{
	int X,Y,c=0,n;
	printf("Enter the no of unique inputs : ");
	scanf("%d",&n);
	while (n>0){
		c=0;
	printf("Enter the input numbers: ");
	scanf("%d %d",&X,&Y);
	for(int i=1;i<X;i++){
		for(int j = i;j<X;j++){
			if (((Y%i)%j) == ((Y%j)%i)){
				printf("The ordered pair : (%d,%d)\n",i,j); 
				c++;
			}
		}
	}
	if (c==0){
		printf("No such ordered pairs");}
	else {
		printf("The number of ordered pairs: %d\n",c);}
	n--;}
	return 0;
}

