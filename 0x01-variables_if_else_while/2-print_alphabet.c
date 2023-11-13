#include <stdio.h>
int main(void)
{
	char ch[] = "abcdefghijklmnopqrstuvwxyz";

	for(int i=0; i<26; i++)
	{
		putchar(ch[i]);
	};
	putchar('\n');
	return (0);
}
