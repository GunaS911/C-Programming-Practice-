#include <stdio.h>
void sort(int arr[],int l);
int main(){
	int l;
	int arr[] = {2,3,5,3,5,9};
	l = sizeof(arr)/sizeof(arr[0]);
	void (*p)(int arr[] , int l) = &sort;
	p(arr,l);
}
void sort(int arr[],int l){
	for (int i = l;i>0;i--){
		for (int j = 0; j<i;j++){
			if (arr[j]>arr[i]){
				arr[i] = arr[j] + arr[i];
				arr[j] = arr[i] - arr[j];
				arr[i] = arr[i] - arr[j];
				}
		}
	}
	for (int k =0;k<l;k++){
		printf("%d ",arr[k]);
	}
}
