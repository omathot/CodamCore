/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omathot <omathot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:15:10 by oscarmathot       #+#    #+#             */
/*   Updated: 2023/01/30 10:44:11 by omathot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

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