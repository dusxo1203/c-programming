#include<stdio.h>

int sum(int x, int y);

int main()
{
	int a;
	int b;
	printf("숫자 2개를 입력하세요 :");
	scanf(" %d %d", &a, &b);

	int c = sum(a, b);
	printf("숫자 %d  부터  숫자 %d까지의  합은 %d 입니다.\n", a, b, c);
}

int sum(int x, int y)
{
	int summ = 0;

	for (int i = x; i < y + 1; ++i)
	{
		summ = summ + i;		// sum += i;
	}


	return summ;
}

// 사용자가 두개의 숫자를 입력, 첫번째 수부터 두번째 입력한  수까지  덧셈