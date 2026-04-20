#include <stdio.h>
#define MAX 5
int queue[MAX];
int front =-1;
int rear =-1;
void insert(int value){
	if (rear == MAX-1){
		printf("Queue Overflow (Queue is full)\n");
		return;
	}
	if (front == -1){
		front = 0;
	}
	queue[++rear] = value;
	printf("%d is inserted into the queue\n",value);
}

void delete (){
	if (front == -1 || front > rear){
		printf("Queue Underflow (Queue is empty)\n");
		return ;
	}
	printf("%d deleted from the queue\n",queue[front++]);
}
void display(){
	if (front == -1 || front > rear){
		printf("Queue is empty\n");
		return;
	}
	printf("Queue elements: ");
	for(int i = front;i<=rear;i++){
		printf("%d ",queue[i]);
	}
	printf("\n");
}
int main(){
	int choice,value;
	while(1){
		printf("Choose your option: \n");
		printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
		printf("Enter choice: ");
		scanf("%d",&choice);
		switch (choice){
			case 1:
				printf("Enter value: ");
				scanf("%d",&value);
				insert(value);
				break;
			case 2:
				delete();
				break;
			case 3:
				display();
				break;
			case 4:
				return 0;
			default:
				printf("Invalid Choice");
		}
	}
	return 0;
}	

