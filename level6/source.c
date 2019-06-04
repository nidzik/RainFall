#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		n(void)
{
	return (system("/bin/cat /home/user/level7/.pass"));
}

int		m(void)
{
	return (puts("Nope"));
}

int		main(int argc, char **argv)
{
	void	*s1;
	void	(*s2)();

	s1 = malloc(64);
	s2 = malloc(4);
	s2 = m;
	strcpy(s1, argv[1]);	// heap overflow on s2
	s2();
	return (0);
}
