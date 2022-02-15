

#include "philo.h"

void	jputendl(char *s, int fd)
{
	if (!s)
		return ;
	jputstr(s, fd);
	jputchar('\n', fd);
}
