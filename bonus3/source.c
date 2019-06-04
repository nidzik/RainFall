#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		main(int argc, char **argv)
{
	int		fd;
	void	buf[132];
	int		n;

	if ((fd = fopen("/home/user/end/.pass", "r")) == 0) {
		return (1);
	}
	if (argc != 2) {
		return (1);
	}
	fread(buf, 1, 66, fd);
	buf[65] = '\0';
	buf[atoi(argv[1])] = '\0';
	fread(buf + 66, 1, 65, fd);
	fclose(fd);
	if (strcmp(buf, argv[1]) == 0) {	// checks a litteral empty string
		execl("/bin/sh", "sh", 0);
	}
	puts(buf + 66);
	return (0);
}
