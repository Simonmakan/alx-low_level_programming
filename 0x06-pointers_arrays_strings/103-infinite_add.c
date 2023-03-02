#include "main.h"
/**
 * rev_string - rev
 * @n: int
 * Return: (r)
 */
void rev_string(char *n)
{
int s = 0, m = 0;
char tmp;

while (*(n + s) != '\0')
{
s++;
}
s--;
for (m = 0; m < s; m++, s--)
{
tmp = *(n + m);
*(n + m) = *(n + s);
*(n + s) = tmp;
}
}
/**
 * infinite_add - sum up no
 * @n1: first no
 * @n2: second no
 * @r: pointer
 * @size_r: size
 * Return: r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int ovf = 0, s = 0, m = 0, dgts = 0;
int v1 = 0, v2 = 0, tmpt = 0;

while (*(n1 + s) != '\0')
s++;
while (*(n2 + m) != '\0')
m++;
s--;
m--;
if (m >= size_r || s >= size_r)
return (0);
while (m >= 0 || s >= 0 || ovf == 1)
{
if (s < 0)
v1 = 0;
else
v1 = *(n1 + s) -'0';
if (m < 0)
v2 = 0;
else
v2 = *(n2 + m) -'0';
tmpt = v1 + v2 + ovf;
if (tmpt >= 10)
ovf = 1;
else
ovf = 0;
if (dgts >= (size_r - 1))
return (0);
*(r + dgts) = (tmpt % 10) + '0';
dgts++;
m--;
s--;
}
if (dgts == size_r)
return (0);
*(r + dgts) = '\0';
rev_string(r);
return (r);
}
