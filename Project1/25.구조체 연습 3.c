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
	//���̵� ���� ��(���������� ��)�� ��ġ�ϰ�,
	//�̸��� ���� ��(���ڿ������� ��)�� ��ġ�ϴ� ���
	if (s1.id == s2.id && strcmp(s1.name, s2.name) == 0)
	{
		printf("���� ���Դϴ�.\n");
	}
	else
	{
		printf("�ٸ� ���Դϴ�.\n");
	}
}

int main()
{
	struct student s1 = { 1,"kane" };
	struct student s2 = { 1,"kane" };

	compare(s1, s2);

	return 0;
}