#include <stdio.h>

int  compare(int x, int y);

int main()
{
	int a;
	int b;
	
	printf("두 정수를 입력하세요 : ");
	scanf(" %d", &a);
	
	printf("두 정수를 입력하세요 : ");
	scanf(" %d", &b);

	compare(a, b);
}

int compare(int x , int y)
{
	if (x > y)
		printf("더큰 수는 a입니다.");

	else
		printf("더 큰 수는 b입니다.");
}

// 숫자를 사용자가 두개  입력해서 그  두 숫자중에 어느것이 더 큰지 확인;