#include <stdio.h>

int area(int a, int b);
int redius(int a, int b);
int main()
{
	int num = area(5, 10);
	printf("�簢���� ���̴� %d �Դϴ�.\n",num );
	int nun = redius(5, 10);
	printf("�簢���� �ѷ��� %d �Դϴ�.\n", nun);
}

int area(int a , int b)
{
	return a * b;
}
int redius(int a, int b)
{
	return (2 * a) + (2 * b);
}
//�簢���� �ѷ��� ���� ���ϱ�
// 1. �Լ��� ����
// 2. �Լ��� ����	
// 3. �Լ��� ȣ��	-> �Լ��̸�();