#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{	
	srand((unsigned int)time(NULL));	// 시드값을 시간값으로 넣어주세요.


	char select;

	while (1)
	{
		printf("값을 입력하세요 : ");
		scanf(" %c", &select);	// 사용자가 입력한 값이 selct에 저장이 된다. 

		if (select == 'y')
			printf("y를 입력하였습니다.\n");

		if (select == 'n')
			printf("n를 입력하였습니다.\n");

		if (select == 'x')
			break;		// while문을 탈출시킨다.
	}
}