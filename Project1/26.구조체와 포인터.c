#include <stdio.h>
#include <string.h>
//�����͸� �̿��� ����ü�� ����غ��ô�.

struct item
{
	int code; //������ �ڵ�(������ �ĺ���)
	char name[40];
	char description[50];
};

int main()
{
	//����ü ������ ����
	//struct ����ü�� *������;
	struct item *item01;

	struct item* item02 = { 2, "FBSX-0479","PLUG IN BRIDGE"};

	item01 = &item02;

	printf("�ڵ� : %d �̸� : %s %s", item01->code, item01->name, item01->description);

	return 0;
}