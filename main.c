#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>
#include <limits.h>

int	main(void)
{
	int	fd;
	char	*line;
	int	ret;

	fd = open("test", O_RDONLY);
	while ((ret = get_next_line(fd, &line)) > 0)
	{
		printf("return=%d, line=%s\n", ret, line);
		free(line);
	}
	printf("return=%d, line=%s\n", ret, line);
	free(line);
	
	return (0);
}
