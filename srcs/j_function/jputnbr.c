

#include "philo.h"

void	jputnbr(int n, int fd)
{
	if (n == -2147483648)
	{
		jputnbr(n / 10, fd);
		jputchar(8 + '0', fd);
	}
	else if (n < 0)
	{
		jputchar('-', fd);
		jputnbr(-n, fd);
	}
	else
	{
		if (n > 9)
			jputnbr(n / 10, fd);
		jputchar(n % 10 + '0', fd);
	}
}
