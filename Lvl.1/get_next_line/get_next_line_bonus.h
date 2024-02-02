/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omathot <omathot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 09:48:28 by omathot           #+#    #+#             */
/*   Updated: 2023/02/03 09:50:11 by omathot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

# ifndef MAX_FD
#  define MAX_FD 256
# endif

# ifndef INT_MAX
#  define INT_MAX 2147483647
# endif

char	*get_next_line(int fd);
size_t	ft_strlen(char *str);
char	*read_line(int fd, char *str);
char	*ft_strchr(char *str, int c);
char	*ft_strjoin(char *str, char *buff);
char	*get_current(char *str);
char	*manage_buff(char *str);
char	*ft_strcpy(char *s1, char *s2);
char	*ft_strdup(const char *s1);

#endif