
#include "philo.h"

bool	chrono(long long *val)
{
	struct timeval	tv;

	if (gettimeofday(&tv, NULL) == ERROR)
		return (false);
	*val = (long long)(tv.tv_sec * MILLI + tv.tv_usec / MILLI);
	return (true);
}

void	elapse(t_philo *philo, long long begin, long long limit)
{
	long long	cur;

	if (!begin)
		if (!chrono(&begin))
			pthread_mutex_unlock(&philo->op->t);
	while (true)
	{
		if (!chrono(&cur))
			pthread_mutex_unlock(&philo->op->t);
		if (cur - begin >= limit)
			break ;
		if (usleep(EPSILON) == ERROR)
			pthread_mutex_unlock(&philo->op->t);
	}
}
