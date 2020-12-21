/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: mraasvel <mraasvel@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/21 19:41:52 by mraasvel      #+#    #+#                 */
/*   Updated: 2020/12/21 19:46:43 by mraasvel      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "head.h"

// /home/mraasvel/work/mraasvel-collective/art

int	main(void)
{
	for (size_t i = 1; i < ART_COUNT + 1; i++)
	{
		printf("\"%s%s%lu%s\"", PATH, NAME, i, SUFFIX);
		printf(",\n");
	}
	return (0);
}