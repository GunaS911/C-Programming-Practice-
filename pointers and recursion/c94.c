#include <stdio.h>
int main()
{
	char str[];
	str[10] = {"H","e","l","l","o","w","o","r","l","d"};
	int *p = &str;
	int l = sizeof(str[])/sizeof(str[0]);
	for (int i = 0;i<l;i++){
		*p++;
	}
	printf("%ls\n",p);
}
