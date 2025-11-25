#include <stdio.h>
int main()
{	int a = 0;
	for (int i =1; i <1000 ; i++){
		if (i!=2){
			for (int j=2; j<i;j++){
				if (i%j == 0 && i!=2){
					a=0;
					break;
				}
				else {
					a=1;
				}
		}
		}
		else {
			printf("%d is a prime \n",i);
		}
		if (a==1){
			printf("%d is a prime \n",i);
		}
	}
	return 0;
}

