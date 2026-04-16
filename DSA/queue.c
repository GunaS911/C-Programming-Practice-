#include <stdio.h>
#define MAX 5
int queue[MAX];
int top =MAX;
int insert(int value)
{
	if (top==0){
		printf("The queue is full");
	}
	else{
		queue[--top]=value;
		printf("%d inserted into the queue\n",value);
	}
}
int delete(){
	if(top==MAX){
		printf("The queue is full");
	}
	else{
		printf("%d Deleted from queue\n",queue[top++]);
	}
}
int main(){
	int choice,value;
	while(1){
		printf("Choose your option: \n");
		printf("1.Insert\n2.Delete\n3.Exit\n");
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
				return 0;
			default:
				printf("Invalid Choice");
		}
	}
	return 0;
}	

