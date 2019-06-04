#include <stdlib.h>
#include <string.h>

int		main(int argc, char **argv)
{
	char	*s;
	int		tmp;
	int		euid;
	int		egid;

	if (atoi(argv[1]) != 423)
	{
		fwrite("No !\n", 1, 5, 2);
	}
	else
	{
		s = strdup("/bin/sh");
		egid = getegid();
		euid = geteuid();
		setresgid(egid, egid, egid);
		setresuid(euid, euid, euid);
		execv("/bin/sh", s);
	}
	return (0);
}
