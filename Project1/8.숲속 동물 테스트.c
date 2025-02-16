#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//문항에 대한 저장(배열)
	//자료형 배열명[] = {값1,값2,값3,....}

	//배열의 값 하나는 배열명[값의 위치]로 접근이 가능합니다.
	//값의 위치(인덱스)는 0번부터 배열의 
	
	int selected[] = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]; //인덱스 0 ~ 11 까지 선택
//시작 화면
	system("title 숲속 동물 테스트");
	printf("어느날 잠에서 깬 당신은\n내몸이 인간의 몸이 아님을 느낍니다.\n\n숲속의 동물이 된 나는\n무엇을 하고 있을까요?\n");
    int select;
	printf("1.숲속으로 떠나기");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[0] = 1;
	}
	else if (select == 2)
	{
		selected[0] = 2;
	}
	system("cls"); //콘솔 화면 지우기
//1번 문항
	printf("\t일어나보니 오랜만에\n\t깨끗한 하늘이 보인다면\n");
	printf("\t1.\"화창한데 오늘 뭐하지?\"\n\t뭐할지 고민한다.\n");
	printf("\t2,\"기분 좋은 일들이 생길 것 같은 날이야!\"\n\t일단 기분이 좋다.");
	scanf("%d", &select);

//2번 문항
	printf("숲속으로 외출 하기전\n");
	printf("\t1.생각나는 대로 챙겨 나간다.\n");
	printf("\t2. 미리 준비해둔 옷과 가방을 챙겨 나간다. \n");
	scanf("%d", &select);
//3번 문항
	printf("처음 온 숲속을 산책할 때\n");
	printf("\t1.입구에 있는 지도를 보고\n\t 어디 갈 지 무엇을 볼 지 정한다.\n");
	printf("\t2.지도를 한번 슥 보고 발길 닿는 대로 간다.\n");
	scanf("%d", &select);

	printf("귀여운 다람쥐들을 만난다면,\n");
	printf("\t1. 처음 보는 동물들도 모두 친구친구!\"\n\t먼저 가서 반갑게 말건다.\n");
	printf("\t2. 귀여워서 심멎이지만\"\n멀리서 지켜본다.\n");
	scanf("%d", &select);

	printf("다람쥐 친구가 피부병이 났다고 하소연을 했다.\n");
	printf("\t1.피부에 좋은 친 제품을 써보는 건 어때 ?""\n\t해결방안을 제시한다.");
	printf("\t2. 아프겠다... 어떡해ㅠㅠㅠ\"\n\t같이 아픔에 공감해준다");

	if (select == 1)
	{
		selected[0] = 1;
	}
	else if (select == 2)
	{
		selected[0] = 2;
	}
	system("cls"); //콘솔 화면 지우기
	

//반복문
//12번 반복을 진행하는 코드(i가 0에서 시작해서 작업이 끝날 때마다 1씩 i가 증가, i가 12 보다 작을 동안 반복
	int total = 0;
	for (int i = 0; i < 12; i++)
	{
		total += selected[i];
	}

	printf("숲속에서 당신은 ");
	//12 ~ 13점
	if (total >= 12 && total <= 13)
	{
		printf("새롭고 짜릿한게 좋은 \n\t꾸러기 호랑이");
	}

	return 0;
}
