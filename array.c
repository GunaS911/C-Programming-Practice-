#include <stdio.h>
int main ()
{
	int num [] = {10,25,50,75,100};
	int l = sizeof(num)/sizeof(num[0]);
	printf("%zu",sizeof(l));
	return 0;
}
