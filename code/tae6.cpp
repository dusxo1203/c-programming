#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand((unsigned int)time(NULL));	// �õ尪�� �ð������� �־��ּ���.


	char select;
	char dice;
	int user = 0;
	int com = 0;

	while (1)
	{
		printf("������ �����ϰξ�? : ");
		scanf(" %c", &select);

		if (select == 'y')
		{
			printf("\n");
			printf("���ӿ� ���̽��ϴ�.\n");
			// code your game

			printf("�ֻ����� �������� d�� �������� : ");
			scanf(" %c", &dice);
			
			if (dice == 'd')
			{
				user = rand() % 6 + 1;
				com = rand() % 6 + 1;
				printf("\n");
				printf("����ڰ� �Է��� ���� : %d\n",user);
				printf("��ǻ�Ͱ� �Է��� ���� : %d\n\n", com);
			
				if (user < com)
					printf("��ǻ�Ͱ� �̰ܹ�����\n\n\n");

				else if (user > com)
					printf("����ڰ� �̰ܺ����\n\n\n");

				else if (user = com)
					printf("���� ��ܺ귶��\n\n\n");

			}
		}

		if (select == 'n')
			break;
	}
}