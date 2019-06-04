#include <stdio.h>
#include <stdlib.h>

int		o(void)
{
	system("/bin/sh");
	_exit(1);
}

int		n(void)
{
	char	*s;

	fgets(s, 512, 0);
	printf(s);	// format string exploit
	exit(1);	// replaced by <o>
}

int		main(void)
{
	return (n());
}
