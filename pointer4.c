#include <stdio.h>
struct student {
	int roll;
	float marks;
};
int main()
{
	struct student s1 = {101,78.5};
	struct student *p;
	p = &s1;
	printf("Roll: %d\n",(*p).roll);
	printf("Marks: %.2f\n",(*p).marks);
	return 0;
}
