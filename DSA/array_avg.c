#include <stdio.h>
int main() 
{
	float s=0,c=0;
	float a;
	printf("Enter the marks: ");
	float marks[8];
	for (int i =0;i<8;i++){
		scanf("%f",&marks[i]);
		s = s+marks[i];}
	a=s/8;
	for(int i=0;i<8;i++){
		if (marks[i]>a){
			c++;}
	}
	printf("No of students marks higher than average is %.0f\n",c);
	return 0;
}
