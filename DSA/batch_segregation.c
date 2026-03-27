#include <stdio.h>
#include <string.h>
int main()
{
	char batch1[10][20],batch2[10][20];
	char name[10];
	int n1,n2;
	printf("Enter the number of students in batch1: ");
	scanf("%d",&n1);
	printf("Enter names of batch1: \n");
	for (int i =0;i<n1;i++){
		scanf("%s",batch1[i]);
	}
	printf("Enter the number of students in batch2: ");
	scanf("%d",&n2);
	printf("Enter the names of batch2: \n");
	for (int i =0;i<n2;i++){
		scanf("%s",batch2[i]);
	}
	printf("Enter the name to move: \n");
	scanf("%s",name);
	int f = -1;
	for (int i = 0;i<n1;i++){
		if(strcmp(batch1[i],name)==0){
			f=i;
			break;
		}
	}
	if (f!=1){
		for (int i =f;i<n1;i++){
			strcpy(batch1[i],batch1[i+1]);
		}
		n1--;
		strcpy(batch2[n2],name);
		n2++;
		printf("Updated Batch 1:\n");
        for (int i = 0; i < n1; i++) {
            printf("%s ", batch1[i]);
        }

        printf("\n\nUpdated Batch 2:\n");
        for (int i = 0; i < n2; i++) {
            printf("%s ", batch2[i]);
        }
    }

    return 0;
}
