

#include "philo.h"

void	jputchar(char c, int fd)
{
	write(fd, &c, 1);
}
