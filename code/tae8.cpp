#include<stdio.h>
#include<stdio.h>
#include <time.h>

int main()

{
	srand((unsigned int)time(NULL));	// �õ尪�� �ð������� �־��ּ���.

	char key;
	while (1) {
		int r = rand() % 10 + 1;
		float pi = 3.14;


		printf("���� �ѷ��� 2 * %lf * %d = %f\n", pi, r, 2 * pi * r);

		printf("���� ������ %lf * %d *%d = %f\n", pi, r, r, pi * r * r);

		printf("�ٽ��Ͻðڽ��ϱ�? (y, n) : ");
		scanf(" %c", &key);


		if (key == 'y')
			continue;

		else
			break;

	}

}
//���� �ѷ��� ���� , 2����r, ����r2
