#include<stdio.h>

int sum(int x, int y);

int main()
{
	int a;
	int b;
	printf("���� 2���� �Է��ϼ��� :");
	scanf(" %d %d", &a, &b);

	int c = sum(a, b);
	printf("���� %d  ����  ���� %d������  ���� %d �Դϴ�.\n", a, b, c);
}

int sum(int x, int y)
{
	int summ = 0;

	for (int i = x; i < y + 1; ++i)
	{
		summ = summ + i;		// sum += i;
	}


	return summ;
}

// ����ڰ� �ΰ��� ���ڸ� �Է�, ù��° ������ �ι�° �Է���  ������  ����