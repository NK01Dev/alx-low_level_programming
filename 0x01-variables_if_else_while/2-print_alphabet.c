#include <stdio.h>
#include <ctype.h>

/**
*main - Program to print alphabet letter followed by new line
*
*Return: return 0
*/
int main(void)
{
	char alp[26] = "abcdefghijklmnoparstuvwxyz";
	int i;

	for (i = 0 ; i < 26 ; i++)
	{
		putchar(alp[i]);
	}
		putchar('\n');
	return (0);
}
