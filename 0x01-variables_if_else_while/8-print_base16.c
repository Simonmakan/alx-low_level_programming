#include <stdio.h>
/**
 * main - numbers of base ten
 * Return: (0) (the program project is done)
 */
int main(void)
{
	int s;
	char m;

	m = 'a';
	s = 0;
	while
		(s < 10) {
			putchar(s + '0');
			s++;
		}
	while
		(m <= 'f') {
			putchar(m);
			m++;
		}
	putchar('\n');
	return (0);
}
