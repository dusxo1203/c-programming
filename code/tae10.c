#include <stdio.h>

float radius(float pi, int r);
float area(float pi , int r);



int main()
{
	float num = radius(3.14,10);

	printf("원의 둘레는 %.2f 입니다.\n", num);

	float nun = area(3.14, 10);

	printf("원의 면적은 %.2f 입니다.\n", nun);
}

float radius(float pi, int r )
{
	return 2 * pi * r;
}

float area(float pi , int r )
{
	return pi * r * r;
}







// 1. 함수의 선언
// 2. 함수의 정의	
// 3. 함수의 호출	-> 함수이름();