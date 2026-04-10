#include <stdio.h>
int main(){
	int n,x,p;
	printf("Enter the number of students: ");
	scanf("%d",&n);
	int marks[n];
	printf("Enter the marks of each students: \n");
	for (int i =0;i<n;i++){
		scanf("%d",&marks[i]);
	}
	printf("Enter the marks of X: ");
	scanf("%d",&x);
	printf("Enter Position: ");
	scanf("%d",&p);
	marks[p-1]=x;
	printf("Output: \n");
	for (int i =0;i<n;i++){
		printf("%d ",marks[i]);
	}
	return 0;
}
