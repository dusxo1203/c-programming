#include<stdio.h>

int main() 

{
	int bag = 48;			// 총 무게

	int min = 3;			// 봉다리 1
	int big = 5;			// 봉다리 2
	
	int num = 0;
	int remain = 0;
	int last = 0;
	int total = 0;

	num = bag / big;		// 총 무게 / 봉다리 2

	remain = bag % big;		// 총 무게 % 봉다리 2

	last = remain / min;		// 남은 무게 / 봉다리 1
	
	total = num + last;

	printf("%dkg 봉다리 %d 개와 %dkg 봉다리 %d 개가 필요 합니다.\n", big, num, min, last);
	printf("총 %d 개의 봉다리가 필요합니다.\n", total);

	// 5kg 봉다리 n 개와 3kg 봉다리 n 개가 필요합니다.
}
