#include <stdio.h>
//포인터와 함수를 사용하는 방법
//1. call by reference
//4. 함수 포인터(함수의 이름을 전달해서,그 기능을 사용할 수 있습니다.
int add(int a, int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}
int main()
{
	//함수 포인터 선언
	//자료형 (*포인터명)(매개변수 데이터 형태)

	//NULL 포인터 : 현재 따로 가리키는 갑이 없는 경우 써주는 값
	//포인터는 값이 있든 없든 그 위치를 가리키기 떄문에, 지정을 안해주면 잘못된 값을 접근할 위험이 있음
	int (*ptr)(int, int) = NULL;

	ptr = add;

	printf("%d + %d = %d\n", a, b, ptr(a, b)); 
	return 0;
}