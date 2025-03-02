#include <stdio.h>
//c언어 함수
//C언어 프로그램의 실행 단위를 의미합니다.
//1. main()은 C언어에서 프로그램 실행 시 처음 실행되도록 설정된 함수입니다.
//2. 함수는 특정 하나의 기능을 수행하는 코드를 묶어서 하나의 명령어처럼 사용합니다.(ex. printf())
//3. 사용자는 C언어에서 제공해주는 함수 이외에 사용자 정의 함수를 정의, 구현할 수 있습니다.
//4. #include를 통해 라이브러리에서 제공해주는 헤더 파일을 코드에 연결해야 쓸 수 있는 라이브러리 함수가 존재합니다.


//함수 만드는 방법
//반환타입 함수명(매개변수)
//{
// 함수를 호출했을 때, 실행할 명령문;
//}

//1. 반환 타입의 경우 해당 함수를 실행한 뒤 넘겨줄 결과 값의 형태를 표시합니다.
//2. 반환 타입에 따라 함수에서는 return을 통해 값을 전달해줘야 합니다.
//3. 매개변수는 함수가 필요한 입력 값을 받기 위해 정의해주는 변수입니다. 외부로부터 전달받은 값을 함수 내부의 값으로써 사용하게 해주며
//   함수의 사용이 종료되면 매개변수도 삭제됩니다.
//4. return 코드를 실행하면, 함수가 종료됩니다. 추가적으로 return 다음에 값이 작성되어있는 경우 함수를 호출한 위치에 그 값을 전달합니다.

int add(int a, int b) //매개변수는 a, b
{
	int result = a + b;
	return result; //add 함수의 결과물
}
int sub(int a, int b)
{
	return a - b; //간단한 계산 결과라면 return을 통해 한번에 작성하는게 위의 방식보다 읽기가 편합니다.
}

int main()
{
	int c = add(2, 7);
	//1. add(2,7) 호출
	//2. 매개변수에 인자 값 전달 a = 2, b = 7
	//인자(Argument)는 매개변수처럼 함수에서 값을 전달하는 과정과 관련된 용어입니다.
	//매개변수가 외부에서 받을 값에 대한 표현이라면, 인자의 경우는 함수 호출 시 실제로 전달되는 값 

	//3. 내부의 식 실행 result = 2 + 7;
	//4. return에 의해 함수 종료 , return 다음에 적힌 값을 함수의 호출 위치에 전달
	//5. int c = 9;

	int d = sub(10, 5);

	printf("%d %d", c, d);


	return 0;
}s