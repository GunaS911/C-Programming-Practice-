#include <stdio.h>
void rev(char str[], int l);
void rev (char str[],int l){
	if (l==0){
		return ;
	}
	printf("%c",str[l-1]);
	rev(str,l-1);
}
int main()
{
	char str[5] = "Hello";
	int l = 5;
	rev(str,l);
	return 0;
}
