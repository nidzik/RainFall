#include <stdio.h>
#include <stdlib.h>

int		g_m = 0;

int		p(char *s)
{
	return (printf(s));		// format string exploit
}

int		n(void)
{
	char	*s;

	fgets(s, 512, 0);
	p(s);
	if (g_m == 0x1025544) {
		system("/bin/cat /home/user/level5/.pass");
	}
	return (0);
}

int		main(void)
{
	return (n());
}
