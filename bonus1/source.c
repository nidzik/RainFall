#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int		main(int argc, char **argv)
{
	int		n;
	void	buff[40];

	n = atoi(argv[1]);	// negative int overflow
	if (n > 9) {
		return(1);
	}
	memcpy(buff, argv[2], n * 4);
	if (n != 0x574f4c46) {
		return (0);
	}
	execl("/bin/sh", "/sh", 0);
	return (0);
}
