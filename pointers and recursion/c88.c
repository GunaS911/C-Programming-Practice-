#include <stdio.h>
int sum(int arr[],int l);
int sum(int arr[],int l){
	if (l== 0){
		return 0;
	}
	return arr[l-1] + sum(arr,l-1);
}
int main()
{
	int arr[5] = {1,2,3,4,5};
	int l = 5;
	printf("%d",sum(arr,l));
	return 0;
}

