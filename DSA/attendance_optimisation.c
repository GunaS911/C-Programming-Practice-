#include <stdio.h>
#include <string.h>
int main(){
	int n,a=1,c=-1;
	printf("Enter the no of students attending: ");
	scanf("%d",&n);
	char fir[n][20];
	char sec[n][20];
	printf("Enter the name of the students: \n");
	for (int i =0;i<n;i++){
		scanf("%s %s",fir[i],sec[i]);
	}
	printf("Name of the students:\n");
	for (int i =0;i<n;i++){
		a=1;
		if (i==c){
			printf("%s %s\n",fir[i],sec[i]);
		}
		else{
			for (int j =i+1;j<n;j++){
				if (strcmp(fir[i],fir[j])==0){
					printf("%s %s\n",fir[i],sec[i]);
					a=0;
					c=j;
					break;
			}
		}
	
		if (a!=0){
			printf("%s\n",fir[i]);
		}
	}
	}
	return 0;
}

