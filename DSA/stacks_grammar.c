#include <stdio.h>
#define MAX 10


char stack[MAX];
int top=-1;
void push(char value){
	if (top==MAX-1){
		printf("Stack Overflow");
	}
	else{
		top++;
		stack[top]=value;
	}
}
void grammar_check(){
	int k; 
	int t=-1;
	int tt=-1;
	char stack1[10];
	char stack2[10];
	for(int i =0;i<top;i++){
		if (stack[i] == 'c'){
			break;}
		else{
			t++;
			stack1[t]=stack[i];
		}		
	}
	int a=0;
	for(int i =0;i<=top;i++){
		if (stack[i] == 'c' && a==0){
			a=1;}
		else if (a==1){
			tt++;
			stack2[tt]=stack[i];
		}		
	}
	int b =0;
	for (int i=0;i<=t;i++){
		if(stack1[i]==stack2[tt-i]){
				b=0;}
		else{
			b=1;
			printf("The string does not belong to the grammar\n");
			break;
		}
	
	}
	if (b==0){
		printf("The string does belong to the grammar\n");
	}
}	
int main(){
	char c;
	int x;
	printf("Enter the total no of charcters in string: \n");
	scanf("%d",&x);
	printf("Enter the string:\n");
	for(int i =0;i<x;i++){
		scanf(" %c",&c);
		push(c);
	}
	grammar_check();
	return 0;
}
