#include <stdio.h>
#include <string.h>
//포인터를 이용햇 구조체를 사용해봅시다.

struct item
{
	int code; //아이템 코드(아이템 식별용)
	char name[40];
	char description[50];
};

int main()
{
	//구조체 포인터 사용법
	//struct 구조체명 *변수명;
	struct item *item01;

	struct item* item02 = { 2, "FBSX-0479","PLUG IN BRIDGE"};

	item01 = &item02;

	printf("코드 : %d 이름 : %s %s", item01->code, item01->name, item01->description);

	return 0;
}