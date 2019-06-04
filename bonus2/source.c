#include <stdio.h>
#include <string.h>

int 		g_lang = 0;		// ds:0x8049988

int			greetuser(char *str)
{
	char	buff[88];

	if (g_lang == 1) {
		memcpy(buff, "Hyvää päivää ", 17);	// buffer overflow on ENV=fi
	} else if (g_lang == 2) {
		memcpy(buff, "Goedemiddag! ", 14);
	} else if (g_lang == 0) {
		memcpy(buff, "Hello ", 7);
	}
	strcat(buff, str);	// buffer overflow
	puts(buff);
	return (0);
}

int			main(int argc, char **argv)
{
	char	*tmp;
	char	buff[80];
	char	*env;

	if (argc != 3) {
		return (1);
	}
	memset(buff, '0', 76);
	strncpy(buff, argv[1], 40);
	strncpy(buff + 40, argv[2], 32);
	if ((env = getenv("LANG")) != NULL) {
		if (memcmp(env, "fi", 2) == 0) {
			g_lang = 1;
		} else if (memcmp(env, "nl", 2) == 0) {
			g_lang = 2;
		}
	}
	memcpy(tmp, buff, 76);
	greetuser(tmp);
	return (0);
}
