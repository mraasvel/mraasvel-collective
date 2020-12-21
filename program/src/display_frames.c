#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ascii.h"

void	delete_frame(void)
{
	system("clear");
	return ;
}

void	delete_frame_fast(void)
{
	int	i;

	i = 0;
	write(1, "\r", 1);
	while (i < HEIGHT + 1)
	{
		write(1, "\33[2K", 4);
		write(1, "\033[A", 3);
		i++;
	}
}

void	display_color(char *color)
{
	size_t	i;

	i = 0;
	while (color[i] != '\0')
		i++;
	write(1, color, i);
}

void	clear_color(void)
{

	write(1, "\033[0;0m", 6);
}

int		display_single_file(const char *pathname)
{
	int		fd;
	char	buffer[IMAGE_SIZE];
	int		ret;

	system("clear");
	fd = open(pathname, O_RDONLY);
	if (fd == -1)
		return (error);
	ret = 1;
	while (ret > 0)
	{
		display_color(GREEN);
		ret = read(fd, buffer, IMAGE_SIZE);
		if (ret == -1)
			return (error);
		if (ret == 0)
			break ;
		write(1, buffer, IMAGE_SIZE);
		delete_frame();
	}
	clear_color();
	return (success);
}

int		display_frames(const char *pathnames[])
{
	int		fd;
	char	buffer[IMAGE_SIZE];
	size_t	i;

	i = 0;
	system("clear");
	while (pathnames[i] != NULL)
	{
		display_color(DARKGREEN);
		fd = open(pathnames[i], O_RDONLY);
		if (fd == -1)
		{
			perror("open");
			return (error);
		}
		if (read(fd, buffer, IMAGE_SIZE) == -1)
			return (error);
		write(1, buffer, IMAGE_SIZE);
		if (pathnames[i + 1] != NULL)
			delete_frame();
		i++;
	}
	clear_color();
	return (success);
}
