#include <stdio.h>
int main()
{
	int n,m,x;
	printf("Enter number of records: ");
	scanf("%d",&n);
	int Id[n+1];
	printf("Enter Ids of all 6 Employee (in ascending order): ");
	for(int i =0;i<n;i++){
		scanf("%d",&Id[i]);
	}
	printf("Enter the Id of newly admitted employee: ");
	scanf("%d",&m);
	for(int i = 0;i<n+1;i++){
		if (Id[i]>m){
			x=i;
			break;}
	}
	for(int i =n;i>x;i--){
		Id[i]=Id[i-1];
	}
	Id[x]=m;
	printf("After Insertion: ");
	for(int i = 0;i<n+1;i++){
		printf("%d ",Id[i]);
	}
	return 0;
}
