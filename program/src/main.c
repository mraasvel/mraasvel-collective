/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: mraasvel <mraasvel@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/21 16:53:44 by mraasvel      #+#    #+#                 */
/*   Updated: 2020/12/21 19:35:13 by mraasvel      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ascii.h"

const char *files[] = {
	"art/kevin/0",
	"art/kevin/1",
	"art/kevin/2",
	"art/kevin/3",
	"art/kevin/4",
	"art/kevin/5",
	"art/kevin/6",
	"art/kevin/7",
	"art/kevin/8",
	"art/kevin/9",
	"art/kevin/10",
	"art/kevin/11",
	"art/kevin/12",
	"art/kevin/13",
	"art/kevin/14",
	"art/kevin/15",
	"art/kevin/16",
	NULL
};

int	main(void)
{
	// display_frames(files);
	display_single_file("../art/total_art.txt");
	return (0);
}
