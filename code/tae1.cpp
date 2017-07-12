#include<stdio.h>

int main()
{
	printf("hellow\n");

	int a = 19;
	printf("my age is %d\n", 19);
	
	float b = 19.19;
	printf("real age is %f\n", b);
	
	char c = 'C';
	printf("my grade is %c\n", c);

	float sum = a + b; // µ¡¼À
	printf("my age add real age is %f\n", sum);

	float min = a - b; // »¬»ù
	printf("something is %f\n", a - b);

	float mult = a * b; // °ö¼À
	printf("multi is %f\n", mult);
	
	float divi = a / b; // ³ª´°¼À
	printf("divide is %f\n", divi);
}