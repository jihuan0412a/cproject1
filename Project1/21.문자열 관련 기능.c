#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>//���ڿ� ���� �۾� �Լ� ���

int main()
{
	//1 ���ڿ� �ۼ� ���
	//char ���ڿ� ��[] = "����";
	char name[] = "�ڹ�";

	//name = "���̽�"; //�迭�� ���� �Ұ�

	//2. char* ����
	char* job = "Application developer";
	job = "progrmmer"; //����Ű�� ���� ����� ���̹Ƿ�, ����
	printf("%s %s", name, job);

	//2. ���ڿ� �迭
	//char �迭��[][���� ����] = {"���ڿ�1","���ڿ�2",....};
	char invertory[][20] = {"�ٳ���","����","���","����"};

	//3. char* ����
	char* shop[] = { "����ٳ���","������" };

	//�Լ� 1. strlen()
	char array1[] = "C Programming";
	char array2[] = "�� ���α׷���";

	printf("array1�� ���ڿ��� ���� = %lu\n", strlen(array1));
	printf("array1�� ���ڿ��� ���� = %lu (sizeof)\n", sizeof(array1));
	//% : ���� ������
	//l : long(����)
	//u : unsigned(��ȣ�� ���� �����ϴ�.(���ڰ� ������ �ƴ��� ǥ��)
	printf("array2�� ���ڿ� ���� = %lu\n", strlen(array2));
	printf("array2�� ���ڿ��� ���� = %lu (sizeof)\n", sizeof(array2));

	//sizeof���� �� ��Ȯ�ϰ� ��밡���� ���̸� �� �� ����.




	//�Լ� 2. strcpy()
	//strcpy(�ٲ� ����, �ٲٷ��� ����)�� ����, ���ڿ��� ���� �����ϰų�, �����ϴµ� ����մϴ�.
	//�Ϲ������δ� ���ڿ��� ������ �� ���� ����

	char sample[] = "apple";
	char sample2[20];

	strcpy(sample2, sample);
	printf("%s", sample2);

	//�Լ� 3. strncpy()
	//strncpy(�ٲ� ����, �ٲٷ��� ����, ����);�� ���� ���ڿ��� �ٲٷ��� ���� �� �Ϻ��� ���� �������°� �����մϴ�.
	char sample3[] = "HelloEveryone";
	char sample4[20];
	strncpy(sample4, sample3, 5);//����ִ� ������ �������� ��� �̻��� ���� ���� ��
	sample4[5] = '\0'; //������ �κ��� \0���� ó���մϴ�.
	printf("%s", sample4);

	//�Լ� 4. strcat()
	//strcat(���ڿ�1, ���ڿ�2)�� ���� ���ڿ� 1�� ���ڿ� 2�� ��ĥ �� �ֽ��ϴ�.
	char sample5[] = "C���";
	char sample6[] = "���α׷���";
	strcat(sample5, sample6);
	//��ĥ ��� ���ڿ�1���� ���̰� �� Ŀ�� ������ ����
	//���� �� �ܾ �� ���� ����� �迭�� ���̶� �ۼ��ؼ� �� ū ��������� �˷��� ��.
	printf("%s", sample5);
	
	//�Լ� 5. strcmp()
	//strcmp(���ڿ�1, ���ڿ�2)
	//�� ���ڿ��� ���մϴ�. �� ����� ���� ������ ���� ���� return�մϴ�.
	//0 : �ι��ڿ��� ���� �����ϴ�.
	//-1 : ���� �ٸ��ϴ�.

	//���� �Ϲ����� ���� �����δ� ������ �����ϴ�.
	//���ڿ�1 < ���ڿ�2�� ��� ����
	//���ڿ�1 > ���ڿ�2�� ��� ���
	//���ڿ�1 == ���ڿ�2�� ��� 0


	//ũ���� ������ ASCII(�ƽ�Ű �ڵ�)�� �������� �Ǵ��մϴ�.
	//ex) "ApplePIE"
	//EX) "ApplfPIE"
	//�� ���� strcmp�� ���� ��� ���� ����?

	//�� �Լ��� �뵵? strcmp�� ���� ��� ���� 0�̸� ���ٴ� ���� �̿��ؼ� ���ڿ��� ���� Ȯ�� �뵵
	printf("%d\n", strcmp("ApplePIE", "ApplfPIE"));

	return 0;
}