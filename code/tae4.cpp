#include<stdio.h>

int main() 

{
	int bag = 48;			// �� ����

	int min = 3;			// ���ٸ� 1
	int big = 5;			// ���ٸ� 2
	
	int num = 0;
	int remain = 0;
	int last = 0;
	int total = 0;

	num = bag / big;		// �� ���� / ���ٸ� 2

	remain = bag % big;		// �� ���� % ���ٸ� 2

	last = remain / min;		// ���� ���� / ���ٸ� 1
	
	total = num + last;

	printf("%dkg ���ٸ� %d ���� %dkg ���ٸ� %d ���� �ʿ� �մϴ�.\n", big, num, min, last);
	printf("�� %d ���� ���ٸ��� �ʿ��մϴ�.\n", total);

	// 5kg ���ٸ� n ���� 3kg ���ٸ� n ���� �ʿ��մϴ�.
}
