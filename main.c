#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>
#include <limits.h>

int	main(void)
{
	int	fd;
	char	*line;

	fd = open("test", O_RDONLY);
	get_next_line(fd, &line);
	printf("%s", line);
	printf("\n");
	get_next_line(fd, &line);
	printf("%s", line);
	printf("\n");
	get_next_line(fd, &line);
	printf("%s", line);
	printf("\n");
	get_next_line(fd, &line);
	printf("%s", line);
	printf("\n");
	close(fd);
	return (0);
}
