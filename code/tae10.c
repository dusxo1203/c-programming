#include <stdio.h>

float radius(float pi, int r);
float area(float pi , int r);



int main()
{
	float num = radius(3.14,10);

	printf("���� �ѷ��� %.2f �Դϴ�.\n", num);

	float nun = area(3.14, 10);

	printf("���� ������ %.2f �Դϴ�.\n", nun);
}

float radius(float pi, int r )
{
	return 2 * pi * r;
}

float area(float pi , int r )
{
	return pi * r * r;
}







// 1. �Լ��� ����
// 2. �Լ��� ����	
// 3. �Լ��� ȣ��	-> �Լ��̸�();