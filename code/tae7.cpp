#include<stdio.h>
#include<stdlib.h>
#include <time.h>


int main()
{
	while (1) {


		srand((unsigned int)time(NULL));

		int korea = 0;
		int english = 0;
		int math = 0;
		int ave = 0;
		char select;


		korea = rand() % 50 + 50;
		english = rand() % 50 + 50;
		math = rand() % 50 + 50;

		ave = (korea + english + math) / 3;

		printf("성적의 평균은 %d입니다.\n", ave);
		printf("한번더? (y / n) : \n");
		scanf(" %c", &select);


		if (select == 'y')
			continue;

		if (select == 'n')
			break;

	}
	
}	
//국영수가 있어 50부터 100까지 랜덤으로 점수를 받아 그걸 평균내