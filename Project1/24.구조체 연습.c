#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct user
{
	char id[40];
	char pw[50];
	char gender;
};



int main()
{
	struct user u1;
	strcpy(u1.id, "sample12@naver.com");
	strcpy(u1.gender, 'F');
	strcpy(u1.pw, "koreaedu1384!@");

	struct user u2;
	strcpy(u2.id, "sample13@naver.com");
	strcpy(u2.gender, 'F');
	strcpy(u2.pw, "koreaedu1384!@");

	struct user u3;
	strcpy(u3.id, "sample14@naver.com");
	strcpy(u3.gender, 'F');
	strcpy(u3.pw, "koreaedu1384!@");

	struct user u4;
	printf("아이디를 입력해주세요 :\n");
	scanf("%d", &u4.id);
	printf("비번을 입력해주세요 :\n");
	getchar();
	scanf("%d", &u4.pw);
	printf("성별을 입력해주세요 :\n");
	getchar();
	scanf("%d", &u4.gender);
	struct user u5;
	printf("아이디를 입력해주세요 :\n");
	scanf("%d", &u5.id);
	printf("비번을 입력해주세요 :\n");
	getchar();
	scanf("%d", &u5.pw);
	printf("성별을 입력해주세요 :\n");
	getchar();
	scanf("%d", &u5.gender);
	struct user u6;
	printf("아이디를 입력해주세요 :\n");
	scanf("%d", &u6.id);
	printf("비번을 입력해주세요 :\n");
	getchar();
	scanf("%d", &u6.pw);
	printf("성별을 입력해주세요 :\n");
	getchar();
	scanf("%d", &u6.gender);

	strcmp(u1.id == u4.id, u1.pw == u4.pw,u1.gender == u4.gender);
	strcmp(u2.id == u5.id, u2.pw == u5.pw, u2.gender == u5.gender);
	strcmp(u3.id == u6.id, u3.pw == u6.pw, u3.gender == u4.gender);



	return 0;
}