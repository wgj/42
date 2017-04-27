
#ifdef HEADER_H
# define HEADER_H

#include "printresult.c"
#include "searchforsquare.c"
#include "readfile.c"
#include "isvalid.c"
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h>

void    findnext(int *coor, int *info,int size, int n);
void    searchforsquare(char **field, int *info);
char    **makestrings(int *info);
void    getinfo(char *av, int *info);
int     checknextsize(int *coor, int size, char **field, int *info);
int     isvalid(int *coor, int size, char **field, int *info);
void    printresult(char **field, int size, int *bestcoor, int *info);

#endif
