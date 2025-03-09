#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct student
{
	int id;
	char name[20];
};
void compare(struct student s1, struct student s2)
{
	//이이디에 대한 비교(정수끼리의 비교)가 일치하고,
	//이름에 대한 비교(문자열끼리의 비교)가 일치하는 경우
	if (s1.id == s2.id && strcmp(s1.name, s2.name) == 0)
	{
		printf("같은 값입니다.\n");
	}
	else
	{
		printf("다른 값입니다.\n");
	}
}

int main()
{
	struct student s1 = { 1,"kane" };
	struct student s2 = { 1,"kane" };

	compare(s1, s2);

	return 0;
}