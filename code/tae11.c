#include <stdio.h>

int area(int a, int b);
int redius(int a, int b);
int main()
{
	int num = area(5, 10);
	printf("사각형의 넓이는 %d 입니다.\n",num );
	int nun = redius(5, 10);
	printf("사각형의 둘레는 %d 입니다.\n", nun);
}

int area(int a , int b)
{
	return a * b;
}
int redius(int a, int b)
{
	return (2 * a) + (2 * b);
}
//사각형의 둘레와 면적 구하기
// 1. 함수의 선언
// 2. 함수의 정의	
// 3. 함수의 호출	-> 함수이름();