#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{	
	srand((unsigned int)time(NULL));	// �õ尪�� �ð������� �־��ּ���.


	char select;

	while (1)
	{
		printf("���� �Է��ϼ��� : ");
		scanf(" %c", &select);	// ����ڰ� �Է��� ���� selct�� ������ �ȴ�. 

		if (select == 'y')
			printf("y�� �Է��Ͽ����ϴ�.\n");

		if (select == 'n')
			printf("n�� �Է��Ͽ����ϴ�.\n");

		if (select == 'x')
			break;		// while���� Ż���Ų��.
	}
}