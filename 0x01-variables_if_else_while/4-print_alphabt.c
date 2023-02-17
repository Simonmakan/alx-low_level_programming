#include <stdio.h>
/**
 * main - alphabet soup
 * Return: (0) (project done)
 */
int main(void)
{
	char s;

	s = 'a';
	while
		(s <= 'z') {
			if ((s != 'q' || s != 'e') && s <= 'z')
				putchar(s);
			s++;
		}
	putchar('\n');
	return (0);
}
