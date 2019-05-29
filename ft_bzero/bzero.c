#include <unistd.h>
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned int i;
	char *p = (char * ) s;

	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}
