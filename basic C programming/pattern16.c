#include <stdio.h>
int main()
{
	for(int i =1; i<10;i=i+2){
		if (i<6){
			for(int k = 0;k<6-i;k=k+2){
				printf(" ");}
			for(int j =0;j<i;j++){
				printf("*");}
		}
		else{
			for(int k = 0;k<i-3;k=k+2){
				printf(" ");}
			for(int j=i;j<10;j++){
				printf("*");
			}
		}

		printf("\n");
	}
	return 0;
}
