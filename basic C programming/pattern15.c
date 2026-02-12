#include <stdio.h>
int main()
{
	for(int i =1;i<6;i++){
		for(int j=0;j<5;j++){
			if(i%2==0){
				printf("%d",i);
			}
			else{
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}
