#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand((unsigned int)time(NULL));	// 시드값을 시간값으로 넣어주세요.


	char select;
	char dice;
	int user = 0;
	int com = 0;

	while (1)
	{
		printf("게임을 시작하겄어? : ");
		scanf(" %c", &select);

		if (select == 'y')
		{
			printf("\n");
			printf("게임에 들어가셨습니다.\n");
			// code your game

			printf("주사위를 굴리려면 d를 누르세요 : ");
			scanf(" %c", &dice);
			
			if (dice == 'd')
			{
				user = rand() % 6 + 1;
				com = rand() % 6 + 1;
				printf("\n");
				printf("사용자가 입력한 값은 : %d\n",user);
				printf("컴퓨터가 입력한 값은 : %d\n\n", com);
			
				if (user < com)
					printf("컴퓨터가 이겨버렸으\n\n\n");

				else if (user > com)
					printf("사용자가 이겨브렸으\n\n\n");

				else if (user = com)
					printf("둘이 비겨브렀으\n\n\n");

			}
		}

		if (select == 'n')
			break;
	}
}