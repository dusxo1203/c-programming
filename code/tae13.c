#include <stdio.h>

int  compare(int x, int y);

int main()
{
	int a;
	int b;
	
	printf("�� ������ �Է��ϼ��� : ");
	scanf(" %d", &a);
	
	printf("�� ������ �Է��ϼ��� : ");
	scanf(" %d", &b);

	compare(a, b);
}

int compare(int x , int y)
{
	if (x > y)
		printf("��ū ���� a�Դϴ�.");

	else
		printf("�� ū ���� b�Դϴ�.");
}

// ���ڸ� ����ڰ� �ΰ�  �Է��ؼ� ��  �� �����߿� ������� �� ū�� Ȯ��;