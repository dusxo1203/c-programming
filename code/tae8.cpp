#include<stdio.h>
#include<stdio.h>
#include <time.h>

int main()

{
	srand((unsigned int)time(NULL));	// 시드값을 시간값으로 넣어주세요.

	char key;
	while (1) {
		int r = rand() % 10 + 1;
		float pi = 3.14;


		printf("원의 둘레는 2 * %lf * %d = %f\n", pi, r, 2 * pi * r);

		printf("원의 면적은 %lf * %d *%d = %f\n", pi, r, r, pi * r * r);

		printf("다시하시겠습니까? (y, n) : ");
		scanf(" %c", &key);


		if (key == 'y')
			continue;

		else
			break;

	}

}
//원의 둘레와 면적 , 2파이r, 파이r2
