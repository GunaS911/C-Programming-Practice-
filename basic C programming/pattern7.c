#include <stdio.h>
int main()

{
	int a =1;
	for(int i = 0;i<6;i++){
		for(int j =0;j<i;j++){
			printf(" ");
		}
		for(int k =5;k>i;k--){
			printf("%d",a);}
		printf("\n");
	}
	return 0;
}
