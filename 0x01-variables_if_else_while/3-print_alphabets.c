#include <stdio.h>
/**
 *main - alphABET game launched
 *Return: (0)
 */
int main(void)
{
	char s;
	char m;

	s = 'a';
	m = 'A';
	while
		(s <= 'z') {
			putchar(s);
			s++;
		}
	while
		(m <= 'Z') {
			putchar(m);
			m++;
		}
	putchar('\n');
	return (0);
}
