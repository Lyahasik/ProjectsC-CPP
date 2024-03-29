/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhorker <dhorker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 17:46:44 by dhorker           #+#    #+#             */
/*   Updated: 2019/01/25 20:27:47 by dhorker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H
# define BUFF_SIZE 1000
# define ERR(x) if (!x) return (0);
# define END(x) if (!x) return (-1);
# include "libft/libft.h"

int	get_next_line(const int fd, char **line);

#endif
