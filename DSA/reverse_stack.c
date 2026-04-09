#include <stdio.h>
#define MAX 4
int top =-1;
char stack[MAX];
void push(char value){
	stack[++top] = value;
}
char pop(){
	if (top==-1){
		return -1;}
	else{
		return stack[top--];
	}
}
int main(){
	char t;
	printf("Enter your 4 digit number: ");
	for(int i =0;i<4;i++){
		scanf(" %c",&t);
		push(t-'0');
	}
	printf("Reversed Number: ");
	for (int i=0;i<4;i++){
		printf("%d",pop());
	}
	return 0;
}
