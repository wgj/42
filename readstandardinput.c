
char    **stdinpt_strings(int *info)
{
	int i;
	char **field;

	i = 0;
	lseek(info[5], info[4] + 1, SEEK_END);
	if (checkvalidmap(info) == 0)
		return (NULL);
	lseek(info[5], (info[4] + 1) * info[0], SEEK_END);
	field = malloc(info[0]);
	while (i < info[0])
	{
		lseek(info[5], info[4] + 1, SEEK_END);
		field[i] = malloc(info[4] + 1);
		read(info[5], field[i], info[4] + 1);
		i++;
	}
	return (field);
}

void    stdinpt_info(int *info)
{
	int width;
	char findwidth;

	width = 0;
	findwidth = '0';
	info[5] = 1;
	while (findwidth > 47 && findwidth < 58)
	{
		width = findwidth - 48 + width * 10;
		read(info[5], &findwidth, 1);
	}
	info[0] = width;
	info[1] = findwidth;
	read(info[5], &findwidth, 1);
	info[2] = findwidth;
	read(info[5], &findwidth, 1);
	info[3] = findwidth;
	read(info[5], &findwidth, 1);
	read(info[5], &findwidth, 1);
	width = 0;
	while(findwidth == info[1] || findwidth == info[2])
	{
		read(info[5], &findwidth, 1);
		width++;
	}
	info[4] = width;
}
