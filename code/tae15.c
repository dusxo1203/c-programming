#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{
	srand((unsigned int)time(NULL));

	int a[10];
	int sum = 0;

	for (int i = 0; i < 10; ++i) {
		a[i] = rand() % 10 + 1;
		printf("%d\n", a[i]);

		sum += a[i];	//	a[0] + a[1] + a[2] + a[3] ... + a[9];
	}

	sum /= 10;
	printf("%d\n", sum);
}