#include <stdio.h>

int main()

{
	int sum = 0;

	for (int a = 0; a < 11; ++a) 
	{
		sum += a;

		printf("0부터 %d까지의 합은 %d 입니다.\n", a, sum);
	}
}















//1부터 n 까지의 합을 구함 첫줄 0부터1까지 두번째 0부터 2까지 합 세번째 0부터 3까지합