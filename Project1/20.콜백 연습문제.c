#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef void (*sever_connection)(char* id, int pw);
void connect_SERVER(sever_connection callback);
void on_server_connected();
void on_server_disconnected();
void Login();
void setting(sever_connection fp)
void OnLogin(char* id, int pw);

char name[20]; //프로그램에서 사용할 아이디 이름
int pw;      //프로그램에서 사용할 비밀번호

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
	printf("서버에 연결을 성공했습니다.");
}

void on_server_disconnected()
{
	printf("아이디 또는 비밀번호가 잘못됬습니다.")
}

void Login()
{
	printf("아이디를 입력합니다. >> ");
	scanf("%d", &name);

	printf("비밀번호를 입력합니다");
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
