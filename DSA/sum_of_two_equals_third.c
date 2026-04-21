#include <stdio.h>
int main()
{
	int n,c,b,a;
	printf("Enter the number of inputs: ");
	scanf("%d",&n);
	int balls[n][3];
	printf("Enter the number written in balls\n");
	for(int i =0;i<n;i++){
		for(int j=0;j<3;j++){
			scanf("%d",&balls[i][j]);
		}
	}
	for (int i =0;i<n;i++){
		a=balls[i][0]+balls[i][1];
		b=balls[i][1]+balls[i][2];
		c=balls[i][0]+balls[i][2];
		if(a==balls[i][2] || b == balls[i][0] || c == balls[i][1]){
		       printf("Yes,the sum of two balls equals third\n");
		}
		else{
			printf("No,the sum of two balls is not to thr third\n");
		}
	}
	return 0;
}	

