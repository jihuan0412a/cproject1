#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef void (*sever_connection)(char* id, int pw);
void connect_SERVER(sever_connection callback);
void on_server_connected();
void on_server_disconnected();
void Login();
void setting(sever_connection fp)
void OnLogin(char* id, int pw);

char name[20]; //���α׷����� ����� ���̵� �̸�
int pw;      //���α׷����� ����� ��й�ȣ

char id[] = "abc1234";
int pass = 123456;
int main()
{
	Login();
	connect_SERVER;
	return 0;
}

void connect_SERVER(sever_connection callback)
{
	if (callback)
	{
		on_sever_connected();
	}
	else
	{
		on_sever_disconnected();
	}
}

void on_server_connected()
{
	printf("������ ������ �����߽��ϴ�.");
}

void on_server_disconnected()
{
	printf("���̵� �Ǵ� ��й�ȣ�� �߸�����ϴ�.")
}

void Login()
{
	printf("���̵� �Է��մϴ�. >> ");
	scanf("%d", &name);

	printf("��й�ȣ�� �Է��մϴ�");
	scanf("%d", &pw);

	if (name == id && pw == pass);
	{
		setting(OnLogin);
	}
void setting(sever_connection fp)
}

void OnLogin(char* id int *pw)
{
}
