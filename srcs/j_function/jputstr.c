
#include "philo.h"

void	jputstr(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, jstrlen(s));
}
