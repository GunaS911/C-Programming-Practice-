#include <stdio.h>
int main(){
	int n,x,p,y;
	printf("Enter the number of students: ");
	scanf("%d",&n);
	int marks[n+1];
	printf("Enter the marks of each students: \n");
	for (int i =0;i<n;i++){
		scanf("%d",&marks[i]);
	}
	printf("Enter the marks of X: ");
	scanf("%d",&x);
	printf("Enter Position: ");
	scanf("%d",&p);
	p--;
	for (int i =p;i<n+1;i++){
		y = marks[i];
		marks[p]=x;
		marks[i+1]=y;}
	for (int i =0;i<n+1;i++){
		printf("%d ",marks[i]);
	}
	return 0;
}
