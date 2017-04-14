/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhermann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 21:22:38 by lhermann          #+#    #+#             */
/*   Updated: 2017/04/14 11:54:15 by lhermann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "libft/libft.h"

# define BUFF_SIZE 42
# define NBFD 5000

typedef struct	s_struct
{
	char	*finligne;
	char	*tmp;
	int		i;
	int		j;
}				t_struct;

int				replace(char **store, char **line, int fd);
int				delete_line(char **store, char **line, int fd);
int				get_next_line(const int fd, char **line);

#endif
