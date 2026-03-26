#include <stdio.h>
int main(){
	int row,col;
	printf("Enter the no of rows and columns: \n");
	scanf("%d %d",&row,&col);
	int mat[row][col];
	printf("Enter the matrix elements: \n");
	for (int i = 0;i<row;i++){
		for(int j =0;j<col;j++){
			scanf("%d",&mat[i][j]);
		}
	}
	for (int k = 0;k<row;k++){
		for(int l =0;l<col;l++){
			if (mat[k][l] != 0){
				printf("(%d,%d): %d\n",k,l,mat[k][l]);
			}
		}
	}
	return 0;
}
