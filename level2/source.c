#include <stdio.h>
#include <stdlib.h>

char		*p(void)
{
	char	*ptr;
	char	buf[64];

	fflush(1);
	gets(buf);	// buffer overflow + double return loop back
	if (((unsigned int)ptr & 0xb0000000) == 0xb0000000)
	{
		printf("(%p)\n", ptr);
		_exit(1);
	}
	puts(buf);
	return (strdup(buf));
}

int		main(void)
{
	return (p());
}
