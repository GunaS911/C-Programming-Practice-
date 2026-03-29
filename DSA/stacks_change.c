#include <stdio.h>
# define MAX 10

int stack[MAX];
int top=-1;
void push(int value){
	if (top==MAX-1){
		printf("Stack Overflow");
	}
	else{
		top++;
		stack[top]=value;
		printf("%d is pushed into the stack\n",value);
	}
}
void pop(){
	if (top ==-1){
		printf("Stack underflow");
	}
	else{
		printf("%d popped from stack\n",stack[top]);
		top--;
	}
}
void peek(int pos){
	if (pos>top+2){
		printf("Invalid Position");
	}
	else if (top==-1){
		printf("Stack is empty");
	}
	else{
		printf("Top element is %d\n",stack[pos-top]);
	}
}
void display(){
	if(top==-1){
		printf("Stack is empty");
	}
	else{
		printf("Stack elements:\n");
		for(int i = top;i>=0;i--){
			printf("%d\n",stack[i]);
		}
	}
}
void change(int pos,int value){
	if (pos>top+2){
		printf("Invalid Position");}
	else{
		stack[top-pos] = value;
		printf("Value at position %d from top changed to %d\n",pos,value);
	}
}
int main(){
	int choice,value,pos;
	while (1) {
        printf("\n--- Stack Menu ---\n");
        printf("1. Push\n2. Pop\n3. Peek\n4. Display\n5. Change\n 6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
	    case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
		printf("Enter position from top to peep: \n");
		scanf("%d",&pos);
                peek(pos);
                break;
            case 4:
                display();
                break;
	    case 5:
		printf("Enter the position from top and the new value for the change :\n");
		scanf("%d %d",&pos,&value);
		change(pos,value);
		break;
            case 6:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}
	
