#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

//1. 파일을 이용해 세이브 / 로드 기능을 보일 수 있는 프로그램을 구현하세요.
// 세이브 : 현재의 작업 상태를 파일에 저장하는 것을 의미합니다.
// 로드 : 파일에 있는 데이터를 불러오는 것을 의미합니다.

//ex) 1. 레벨 업 기능을 구현해서 플레이어의 레벨이 1 상승했습니다.
//    2. 현재 플레이어의 능력치는 레벨 2 힘 5 민 5 지 5 행5 입니다.
//    3. 세이브 기능을 사용할 경우 해당 정보가 저장됩니다.
//    4. 새로 하기 기능을 누를 경우 플레이어의 능력치가 reset됩니다.
//    5. 이 상태에서 로드를 누를 경우 위에 저장해둔 전보가 다시 플레이어의 능력치로 설정됩니다.

int main()
{
	FILE* fp = NULL;

	fp = fopen("program_data.txt", "w");
	int le = 2;
	int st = 5;
	int spe = 5;
	int sm = 5;
	int lu = 5;
	int choice;
	//while(1) 안에 코드를 작업하면 계속 반복됩니다.
	
	printf("1. 레벨 업 기능을 구현해서 플레이어의 레벨이 1 상승했습니다.\n");
	printf("\t 2. 현재 플레이어의 능력치는 레벨 2 힘 5 민첩 5 지능 5 행운 5입니다.\n");
	printf("3. 세이브 기능을 사용할 경우 해당 정보가 저장됩니다.\n");
	printf("4. 새로 하기 기능을 누를 경우 플레이어의 능력치가 reset 됩니다.\n");
	printf("5. 이 상태에서 로드를 누를 경우 위에 저장해둔 정보가 다시 플레이어의 능력치로 설정됩니다.\n");

	printf("1. 세이브\t " "2. 새로하기\t" "3.로드\n");
	scanf("%d", &choice);

	
while (1)
	{
		if (choice == 1)
		{
			printf("세이브가 완료 되었습니다.");
			fprintf(fp, "%d %d %d %d %d\n", le, st, spe, sm, lu);
			exit(0);
		}
		if (choice == 2)
		{
			printf("초기화가 완료 되었습니다.");
			fp = fopen("program_data.txt", "w");
			exit(0);
		}
		if (choice == 3)
		{
			printf("\t 로드하신 현재 플레이어의 능력치는 레벨 2 힘 5 민첩 5 지능 5 행운 5입니다.\n");
			exit(0);
		}
		
		printf("1. 레벨 업 기능을 구현해서 플레이어의 레벨이 1 상승했습니다.\n");
		printf("\t 2. 현재 플레이어의 능력치는 레벨 2 힘 5 민첩 5 지능 5 행운 5입니다.\n");
		printf("1. 세이브\t " "2. 새로하기\t" "3.로드\n");
		scanf("%d", &choice); //입력을 진행할 경우, 입력 전까지는 대기 상태가 됩니다.




		system("cls");//해당 명령어를 작성하면 콘솔 창이 지워집니다.

		if (choice == 0)
		{
			exit(0);
		}
	}
	return 0;
}