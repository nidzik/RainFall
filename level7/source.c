#include <stdio.h>
#include <stdlib.h>

char	*g_c = NULL;

struct level 	{
	int i;
	char *str;
};

int		m(void)
{
	time(NULL);
	return (printf("%s - %d\n", g_c, time_t));
}

int		main(int argc, char **argv)
{
	struct level *s1;
	struct level *s2;
	
	s1 = malloc(8);
	s1->i = 0x1;
	s1->str = malloc(8);
	s2 = malloc(8);
	s2->i = 0x2;
	s2->str = malloc(8);
	strcpy(s1->str, argv[1]); // heap overflow
	strcpy(s2->str, argv[2]);
	fd = fopen("/home/user/level8/.pass", "r");
	fgets(g_c, 68, fd);
	puts("~~");
	return (0);
}
