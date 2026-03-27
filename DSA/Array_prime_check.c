#include <stdio.h>
int main()
{
	int t,a;
	printf("Enter the number of elements to check: \n");
	scanf("%d",&t);
	int pri[t];
	printf("Enter the numbers to check: \n");
	for (int i = 0;i<t;i++){
		scanf("%d",&pri[i]);
	}
	for (int i =0;i<t;i++){
		a=0;
		for(int j =2;j<(pri[i]/2);j++){
			if (pri[i]%j==0){
				printf("No\n");
				a=1;
				break;
			}

		}
		if (a!=1){
			printf("Yes\n");
		}

	}
	return 0;
}

