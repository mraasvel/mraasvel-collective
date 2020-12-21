/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   end.c                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: mraasvel <mraasvel@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/22 00:22:54 by mraasvel      #+#    #+#                 */
/*   Updated: 2020/12/22 00:26:24 by mraasvel      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

const char *end[] = {

"████████ ██   ██ ███████     ███████ ███    ██ ██████ " ,
"   ██    ██   ██ ██          ██      ████   ██ ██   ██ ",
"   ██    ███████ █████       █████   ██ ██  ██ ██   ██ ",
"   ██    ██   ██ ██          ██      ██  ██ ██ ██   ██ ",
"   ██    ██   ██ ███████     ███████ ██   ████ ██████  ",
"                                                       ",
"                                                       ",
   NULL
};

int	print_ending(void)
{
	for (size_t i = 0; end[i] != NULL; i++)
	{
		printf("%s\n", end[i]);
	}
	return (0);
}