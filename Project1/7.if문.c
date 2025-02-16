#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	//0부터 100점 사이의 점수를 하나 입력받습니다.
	//점수가60점 이상일 경우 "함격"을 화면에 출력합니다.
	//점수가60점 미만일 경우 "불합격"을 화면에 출력하도록 프로그램 코드를 구현하세요.
	//점수가 해당 범위의 값이 아닐 경우 "잘못된 입력입니다."를 화면에 출력합니다.

	int score;
	printf("0점부터 100점 사이의 점수를 하나 입력해주세요 >> ");
	scanf("%d", &score);
	//[일반적인 풀이]
	//if (score < 0)
	//{
	//	printf("잘못된 입력입니다.\n")
	//}
	//else if (score > 100)
	//{
	//	printf("잘못된 입력입니다.\n")
	//}
	//else if (score >= 60)
	//{
	//	printf("합격\n");
	//}
	//else if (score < 60)
	//{
	//	printf("불합격\n");
	//}
	if (score < 0 || score > 100) //A OR B A 또는 조건 B가 만족할 경우 실행 
	{
		printf("잘못된 입력입니다.\n");
	}
	else if (score >= 60)
	{
		printf("합격\n");
	}
	else if (score < 60)
	{
		printf("불합격\n"); 
//조건식을 2개 이상 사용하는 방법
// a and b 비트연산 기호 &를 2번 작성 
// ex) score >= 0 && score <= 100 
// 점수는 0이상 100 이하인 조건
// a or b 비트연산 기호 |를 2번 작성
//score < 0 || score > 100
//점수가 0보다 작거나, 100보다 큰 조건
	}
	return 0;
}