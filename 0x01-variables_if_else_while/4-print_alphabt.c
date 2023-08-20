#include<stdio.h>
int main ()
{
	int c;
	for(c='a';c<='z';c++)
	{
		if (c=='q'||c=='e')
		{
			continue;
		}
		putchar(c);
	}
	putchar('\n');
	return 0;
}
