#include <stdio.h>
#include <string.h>
int main(){
	int ls[10];
	int a;
	int t;
	printf("Enter your ten numbers: \n");
	for(int i =0;i<10;i++){
		scanf("%d",&ls[i]);
	}
	int asc[10];int des[10];
	for(int i=0;i<10;i++){
    		asc[i] = ls[i];
 	   	des[i] = ls[i];
	}
	char str[3];
	scanf("%s",str);
	
	if (strcmp(str,"des")==0){
		for (int i = 0;i<9;i++){
			for(int j =0;j<9-i;j++){
				if(des[j]<des[j+1]){
					t = des[j+1];
					des[j+1]=des[j];
					des[j]=t;
				}
			}
		}
		for(int k=0;k<10;k++){
			printf("%d ,",des[k]);
		}
		printf("\n");
	}
	else if(strcmp(str,"asc")==0){
		for (int i = 0;i<9;i++){
			for(int j=0;j<9-i;j++){
				if (asc[j]>asc[j+1]){
					t = asc[j+1];
					asc[j+1]=asc[j];
					asc[j]=t;
				}
			}
		}
		for(int k=0;k<10;k++){
			printf("%d ,",asc[k]);
		}
	}
	return 0;
	}
