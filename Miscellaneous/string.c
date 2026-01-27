#include <stdio.h>
int main()
{
	char carname[]="Volvo";
	int lenght = sizeof(carname)/sizeof(carname[0]);
	int i;
	for (i=0;i<lenght;i++){
		printf("%c\n",carname[i]);}
	return 0;
}
