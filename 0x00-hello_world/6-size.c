#include <stdio.h>
/**
 * main -  size of various types on the computer
 * Return: 0 (work well done)
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int m;
	float f;

	printf("size of a char : % lu byte(s)\n', (unsigned long) sizeof(a));
	printf("size of a int : % lu byte(s)\n', (unsigned long) sizeof(i));
	printf("size of a long int : % lu byte(s)\n', (unsigned long) sizeof(l));
	printf("size of a long long int : % lu byte(s)\n', (unsigned long) sizeof(m));
	printf("size of a float : % lu byte(s)\n', (unsigned long) sizeof(f));
	return (0);
}
