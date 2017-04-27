
#include "header.h"

void    findnext(int *coor, int *info,int size, int n)
{
	int place;

	if (n < 1)
		place = 1 - n;
	else
		place = 1;
	if (coor[1] + size + place > info[4])
	{
		coor[0]++;
		coor[1] = 0;
	}
	else
		coor[1] = coor[1] + place;
	if (coor[0] + size > info[0] || size > info[4])
		coor[0] = -1;
}

void	searchforsquare(char **field, int *info)
{
	int n;
	int size;
	int *coor;
	int *bestcoor;

	if (field[0] == NULL)
	{
		write(1, "map error\n", 10);
		return ;
	}
	coor = malloc(sizeof(int) * 2);
	bestcoor = malloc(sizeof(int) * 2);
	coor[0] = 0;
	coor[1] = 0;  
	size = 0;
	while (coor[0] != -1)
	{
		n = isvalid(coor, size + 1, field, info);
		if (n > 0)
		{
			size = size + n;
			bestcoor[0] = coor[0];
			bestcoor[1] = coor[1];
		}
		findnext(coor, info, size, n);
	}
	free(coor);
	printresult(field, size, bestcoor, info);
	free(bestcoor);
}
