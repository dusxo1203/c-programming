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

		printf("������ ����� %d�Դϴ�.\n", ave);
		printf("�ѹ���? (y / n) : \n");
		scanf(" %c", &select);


		if (select == 'y')
			continue;

		if (select == 'n')
			break;

	}
	
}	
//�������� �־� 50���� 100���� �������� ������ �޾� �װ� ��ճ�