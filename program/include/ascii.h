/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ascii.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mraasvel <mraasvel@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/21 17:10:01 by mraasvel      #+#    #+#                 */
/*   Updated: 2020/12/21 19:34:55 by mraasvel      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASCII_H
# define ASCII_H

# include <stddef.h>

# define ART_DIR "../art"
# define IMAGE_SIZE 9648
# define HEIGHT 48

# define DARKRED "\033[0;31m"
# define DARKGREEN "\033[0;32m"
# define DARKYELLOW "\033[0;33m"
# define DARKBLUE "\033[0;34m"
# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define YELLOW "\033[1;33m"
# define BLUE "\033[1;34m"

typedef enum	e_errnums
{
	false,
	true,
	success,
	error
}				t_errnums;

/*
** display_frames.c
*/

int	display_frames(const char *pathnames[]);
int	display_single_file(const char *pathname);

#endif
