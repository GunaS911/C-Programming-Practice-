#include <stdio.h>
struct stu{
	int roll;
	float marks;
};
void dis(struct stu *p){
	printf("Roll: %d\n",(*p).roll);
	printf("Marks: %.2f\n",(*p).marks);
}
int main (){
	struct stu s = {102,90};
	dis(&s);
	return 0;
}
