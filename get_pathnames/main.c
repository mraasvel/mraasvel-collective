/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: mraasvel <mraasvel@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/21 19:41:52 by mraasvel      #+#    #+#                 */
/*   Updated: 2020/12/22 00:33:11 by mraasvel      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

# define PATH "../art/"
# define NAME "ascii-art-"
# define SUFFIX ".txt"
# define ART_COUNT 301

/*
** TO ADD NEW ART:
** 1. change "# define FRAME_TOTAL", to new number
** 2. copy paste everything in "pathnames.txt" into the variable filenames in ./program/main.c
** 3. change the "# define FRAME_TOTAL" in ./program/include/ascii.h to new number
*/

int	main(void)
{
	for (size_t i = 1; i < ART_COUNT + 1; i++)
	{
		printf("\"%s%s%lu%s\"", PATH, NAME, i, SUFFIX);
		printf(",\n");
	}
	return (0);
}