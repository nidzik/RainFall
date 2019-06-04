#include <stdio.h>
#include <stdlib.h>

int		run(void)
{
	fwrite("Good... Wait what?\n", 1, 19, 1);
	system("/bin/sh");
}

int		main(void)
{
	char 	buf[64];

	gets(buf);	// buffer overflow
	return (0);
}
