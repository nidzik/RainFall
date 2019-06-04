p(char *s1, char *s2)
{
	char	buf[4104];

	char	*ptr;
	puts(s2);
	read(0, &buf, 4096);
	ptr = strchr(buf, '\n');
	*ptr = '\0';
	strncpy(s1, &buf, 20);
	return (s1);
}

pp (char *ptr)
{
	char	buf1[20];
	char	buf2[20];

	p(buf1, " - ");
	p(buf2, " - ");
	strcpy(ptr, buf1);
	ptr[strlen(ptr)] = 32;
	strcat(ptr, buf2);
	return (ptr);
}

int		main(void)
{
	char	buff[42];

	pp(buff);
	puts(buff);
	return (0);
}
