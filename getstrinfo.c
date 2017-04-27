
void	getinfo(char *av, int *info)
{
  int a;
  char b;
  char str[10000];

  info[5] = open(av, O_WRONLY);
  read(info[5], &b, 1)
    if (b == '\n')
}
