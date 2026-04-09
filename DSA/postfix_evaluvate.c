#include <stdio.h>
#include <ctype.h>
#define MAX 100
int top = -1;
int stack[MAX];
void push(int x){
	stack[++top] = x;
}
int pop(){
	return stack[top--];
}
int main(){
	int p,q,r;
	char *e;
	char exp[MAX];
	printf("Enter your postfix expression to evaluate: ");
	scanf("%s",exp);
	e=exp;
	while (*e != '\0'){
		if (isdigit(*e)){
			push(*e-'0');}
		else {
			p = pop();
			q = pop();
			switch(*e){
				case '+':r =q+p; 
					 break;
				case '-':r=q-p;
					 break;
				case '*':r=p*q;
					  break;
				case '/':r=q/p;
					 break;
				}
			push(r);
		}
		e++;
	}
	printf("Evaluated Value : %d",pop());
	return 0;
}


		
