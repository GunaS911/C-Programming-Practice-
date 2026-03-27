#include <stdio.h>
int main()
{
	int arr[10];
	int n =0 ,p=0;
	printf("Enter the 10 numbers: \n");
	for(int i =0;i<10;i++){
		scanf("%d",&arr[i]);
		if (arr[i]>0){
			p++;
		}
		else if(arr[i]<0){
			n++;
		}
	}
	int pos[p],neg[n];
	int cp=0,cn=0;
	for(int i =0;i<10;i++){
		if (arr[i]>0){
			pos[cp]=arr[i];
			cp++;
		}
		else if (arr[i]<0){
			neg[cn]=arr[i];
			cn++;
		}
	}
	printf("Positive Numbers : \n");
	for (int i = 0;i<p;i++){
		printf("%d ",pos[i]);
	}
	printf("\n");
	printf("Negative Numbers : \n");
	for (int i = 0;i<n;i++){
		printf("%d ",neg[i]);
	}
	printf("\n");
	return 0;
}







