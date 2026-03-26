#include <stdio.h>
int main()
{
	int n;
	printf("Enter the no of non zero terms in your polynomial expression: ");
	scanf("%d",&n);
	int poly[n][2];
	printf("Enter the coefficient and the exponents: \n");
	for (int i =0;i<n;i++){
		for(int j =0;j<2;j++){
			scanf("%d",&poly[i][j]);
		}
	}
	printf("Coefficients | Exponents\n");
	for (int i =0;i<n;i++){
		for(int j =0;j<2;j++){
			printf("%d\t\t",poly[i][j]);
		}
		printf("\n");
	}
	return 0;
}
