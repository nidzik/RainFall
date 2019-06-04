#include <stdio.h>
#include <stdlib.h>

int		m = 0;

int		v(void)
{
	char	buf;

	fgets(buf, 512, 0);
	printf(buf);	// string format exploit
	if (m != 64)
		return (0);
	fwrite("Wait what?!\n", 1, 12, 1);
	return (system("/bin/sh"));
}

int		main(void)
{
	return (v());
}
