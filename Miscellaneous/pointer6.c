#include <stdio.h>
struct stu {
	int roll;
	float marks;
};

int main() 
{
	struct stu s[3] = {{1,98.5},{2,88.65},{3,95.32}};
	struct stu *p = s;
	int l = sizeof(s)/sizeof(s[0]);
	for (int i = 0;i<l;i++){
		printf("Roll : %d , Marks : %.2f \n",(*p).roll,(*p).marks);
		p++;
	}
	return 0;
}
